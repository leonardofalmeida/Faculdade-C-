/*
 * Faça um algoritmo que receba um vetor de N posições e o preencha.
 *
 * Após o preenchimento, busque no vetor, o maior, o menor número e o elemento central.
 *
 * Imprima-os nessa ordem e suas respectivas posições.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    int tamanho, indiceMaior, indiceMenor, indiceMeio, i;
    cin >> tamanho;
    float v[tamanho], meio, maior, menor;
    for(i = 0; i < tamanho; ++i)
    {
        cin >> v[i];
    }

    //Considera o maior e o menor como os indices inciais
    maior = v[0];
    menor = v[0];

    /*
     * Esse if esta aqui, para saber se existe ou nao
     * um indice no meio, se for par, nao existe, se for impar existe
     */
    if(tamanho % 2 == 0)
    {
        for(i = 0; i < tamanho; ++i)
        {
            if(v[i] > maior)
            {
                maior = v[i];
                indiceMaior = i;
            }
            if(v[i] < menor)
            {
                menor = v[i];
                indiceMenor = i;
            }
        }
        cout << maior << endl << menor << endl << -1 << endl;
        cout << indiceMaior << endl << indiceMenor << endl << -1 << endl;
    }
    else
    {
        meio = v[(tamanho - 1) / 2]; // acha o valor do meio
        indiceMeio = (tamanho - 1) / 2; // acha o indice do meio
        for(i = 0; i < tamanho; ++i)
        {
            if(v[i] > maior)
            {
                maior = v[i];
                indiceMaior = i;
            }
            if(v[i] < menor)
            {
                menor = v[i];
                indiceMenor = i;
            }
        }
        cout << maior << endl << menor << endl << meio << endl;
        cout << indiceMaior << endl << indiceMenor << endl << indiceMeio << endl;
    }
    return 0;
}
