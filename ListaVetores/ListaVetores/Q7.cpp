/*
 * Faça um programa que insere elementos em um vetor de inteiros deslocando os elementos existentes.
 *
 * O vetor terá capacidade fixa para 10 elementos e iniciará com todos os valores iguais a zero.
 *
 * O programa deverá a princípio ler k valores a serem colocados no vetor (sendo k <= 10).
 *
 * Ele deverá ler, em seguida, o valor de um novo elemento e a posição p na qual ele deve ser inserido.
 *
 * O programa deverá então inserir o novo elemento na posição posição p deslocando os elementos existentes
 * (descartando o último elemento que ficar sobrando).
 *
 * Por fim, o programa deve escrever os elementos do vetor.
 *
 */



#include <iostream>

using namespace std;

int main ()
{
    int vetor[10] = {}, elementos, i, num, indice;
    cin >> elementos;
    for(i = 0; i < elementos; ++i)
    {
        cin >> vetor[i];
    }
    cin >> num;
    cin >> indice;

    //Comecei do fim do vetor, pra poder excluir o ultimo numero
    //que ultrapassar a capacidade. Então percorro do ultimo
    //até o indice do usuario
    for(i = (elementos - 1); i >= indice; --i)
    {
        //Se o numero de elementos for igual 10, quer dizer
        //que o vetor está na capacidade maxima, entao precisei
        //excluir o ultimo valor, fazer com que o elemento no
        //indice 9, fosse igual o elemento do indice 8, e assim por diante
        if(elementos == 10)
        {
            vetor[i] = vetor[i - 1];
        }
        //Caso contrario, basta apenas, passar os valores
        //um indice adiante. O do indice 4, pro indice 5 e assim por
        //diante
        else
        {
            vetor[i + 1] = vetor[i];
        }
        //Repare na diferença, no primeiro começo do penultimo valor
        // e "esqueço" do ultimo e sobrescrevo e no segundo começo do
        //ultimo, pois ele estará dentro do vetor e nao vou sobrescrever
    }

    vetor[indice] = num;
    for(i = 0; i < 10; ++i)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}
