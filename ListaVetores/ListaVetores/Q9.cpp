/*
 * Faça um programa que preencha um vetor com dez números reais,
 * calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    float v[10], soma = 0, count = 0;
    int i;
    for(i = 0; i < 10; ++i)
    {
        cin >> v[i];
    }
    for(i = 0; i < 10; ++i)
    {
        if(v[i] < 0) // contagem dos numeros negativos
        {
            count +=1;
        }
        if(v[i] >= 0) //soma dos numeros positvos
        {
            soma = soma + v[i];
        }
    }
    cout << count << endl << soma << endl;
    return 0;
}
