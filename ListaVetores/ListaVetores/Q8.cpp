/*
 * Faça um programa que leia um número inteiro positivo
 * que indica a quantidade de elementos de um dado vetor de números inteiros.
 *
 * Em seguida seu programa deverá ler valores para todas as posições do vetor.
 *
 * Após a leitura dos valores dos elementos do vetor,
 * seu programa deverá ler do dispositivo de entrada padrão um outro número inteiro que deverá ser removido do vetor,
 * caso o mesmo se encontre presente.
 *
 * O primeiro valor encontrado no vetor que for igual ao elemento lido é o que deve ser removido.
 *
 * Após a remoção do elemento, o programa deve escrever no dispositivo de saída padrão todos os elementos do vetor.
 *
 * Caso o elemento a ser removido não pertença ao vetor,
 * o programa deverá exibir a mensagem ELEMENTO NAO ENCONTRADO (letras maiúsculas e sem acentuação).
 *
 * Ao remover o elemento do vetor, não é perdido que haja um espaço vazio no meio do vetor.
 *
 * Ou seja, ao final do processo de remoção, a posição livre do vetor deverá ser obrigatoriamente a última posição do vetor.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    int elementos, i, remover, indiceRemover;
    bool existe = false;
    cin >> elementos;
    int vetor[elementos];
    for(i = 0; i < elementos; ++i)
    {
        cin >> vetor[i];
    }
    cin >> remover; //numero a se remover
    for(i = 0; i < elementos; ++i)
    {
        if(vetor[i] == remover)
        {
            existe = true; //o numero a ser removido existe no vetor
            indiceRemover = i; //armazena o indice do numero a ser removido
            i = elementos; //termina o for, caso encontre o numero
        }
    }
    
    if(existe)
    {
        //i é menor que elementos - 1, porque desse jeito, não "pego"
        //um indice que nao existe no vetor, por exemplo, o indice 9
        //(num vetor de 10 posiçoes) vai "pegar" um indice 10, que nao existe
        //assim nesse caso, o for so ira até o indice 8, recebera o
        //indice 9.
        for(i = indiceRemover; i < elementos - 1; ++i)
        {
            vetor[i] = vetor[i + 1];
        }

        vetor[elementos - 1] = remover;

        //elementos - 1, pra nao imprimir o ultimo indice, que estaria
        //repetido por causa do for acima.
        for(i = 0; i < elementos - 1; ++i)
        {
            cout << vetor[i] << " ";
        }
    }
    else
    {
        cout << "ELEMENTO NAO ENCONTRADO" << endl;
    }
    cout << endl;
    return 0;
}
