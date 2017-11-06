/*
 * Faça um programa que preencha um vetor com oito números inteiros,
 * calcule e mostre dois vetores resultantes.
 *
 * O primeiro vetor resultante deve conter os números positivos;
 * o segundo deve conter os números negativos.
 *
 * Cada vetor resultante vai ter, no máximo, oito posições,
 * que poderão não ser completamente utilizadas.
 *
 * Assuma que todos os dados de entrada serão fornecidos em uma única linha.
 *
 * Assuma também que sempre haverá no mínimo um número positivo e um número negativo nos dados de entrada.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    int v1[8], vPositivo[8], vNegativo[8], count1 = 0, count2 = 0;
    for(int i = 0; i < 8; ++i)
    {
        cin >> v1[i];
    }
    for(int i = 0; i < 8; ++i)
    {

        //usei o count no lugar do "i" para sempre o valores ocuparem
        //as primeiras posiçoes e nao ficarem espaçados

        if(v1[i] >= 0)
        {
            vPositivo[count1] = v1[i];
            count1 += 1;
        }
        else
        {
            vNegativo[count2] = v1[i];
            count2 += 1;
        }
    }
    for(int i = 0; i < count1; ++i)
    {
        cout << vPositivo[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < count2; ++i)
    {
        cout << vNegativo[i] << " ";
    }
    cout << endl;
    return 0;
}
