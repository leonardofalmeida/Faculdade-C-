/*
 * Faça um programa que receba 15 números inteiros.
 *
 * Os primeiros dez números devem ser armazenados em um vetor e os cinco últimos em outro.
 *
 * Assuma que todos os 10 primeiros números serão fornecidos em uma única linha e
 * todos os últimos 5 números serão fornecidos em uma segunda linha.
 *
 * O programa deverá mostrar para cada número do primeiro vetor,
 * quantos números do segundo vetor são seus divisores.
 *
 */
  
#include <iostream>

using namespace std;

int main ()
{
    int vetA[10], vetB[5], aux[10], i, j, cont = 0, divisao;
    for(i = 0; i < 10; ++i)
    {
        cin >> vetA[i];
    }
    for(i = 0; i < 5; ++i)
    {
        cin >> vetB[i];
    }
    for(i = 0; i < 10; ++i)
    {
        //O for abaixo percorre o cada numero do vetor A,
        // dividindo todos pelo vetor B
        for(j = 0; j < 5; ++j)
        {
            divisao = vetA[i] % vetB[j];
            if(divisao == 0)
            {
                cont += 1;
            }
        }
        aux[i] = cont; //vai armazenando quantos divisores cada numero tem
        cont = 0; // reseta o contador
    }
    for(i = 0; i < 10; ++i)
    {
        cout << vetA[i] << " " << aux[i] << endl;
    }
    return 0;
}
