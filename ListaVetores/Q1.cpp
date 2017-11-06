/*
 * Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros.
 *
 * O programa deve, então, subtrair o primeiro elemento de A do último de B, o segundo de A do penúltimo de B, e assim sucessivamente.
 *
 * O programa deve, por fim, calcular a soma dos resultados de todas as subtrações e exibi-la no dipositivo de saída padrão.
 *
 * Assuma que todos os dados de entrada do vetor A serão fornecidos em uma mesma linha e
 * todos os dados do vetor B serão fornecidos em uma segunda linha.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    int vetA[5], vetB[5], aux[5], i, soma;
    for(i = 0; i < 5; ++i)
    {
        cin >> vetA[i];
    }
    for(i = 0; i < 5; ++i)
    {
        cin >> vetB[i];
    }

    //Armazena os resultados da subtração em um vetor auxiliar
    for(i = 0; i < 5; ++i)
    {
        aux[i] = vetA[i] - vetB[4 - i];
    }
    
    for(i = 0; i < 5; ++i)
    {
        soma = soma + aux[i];
    }
    cout << soma << endl;
    return 0;
}
