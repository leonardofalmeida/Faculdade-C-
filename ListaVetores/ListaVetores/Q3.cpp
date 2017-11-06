/*
 * Faça um programa que receba sete valores inteiros e armazene-os em um vetor.
 *
 * Todos os sete valores serão fornecidos em uma única linha.
 *
 * Em seguida, o programa receberá, em uma segunda linha,
 * uma sequência indefinida de números inteiros (entre 0 e 6) e,
 * por fim nesta mesma segunda linha, um número negativo indicando que a sequência terminou
 * (os números da sequência indicam as posições do vetor).
 *
 * O programa deverá calcular a multiplicação dos números do vetor indicados pelas posições passadas na sequência de números.
 *
 */
 
#include <iostream>

using namespace std;

int main ()
{
    int v1[7], num, multi = 1;
    for(int i = 0; i < 7; ++i)
    {
        cin >> v1[i];
    }
    while(num >= 0) 
    {
        cin >> num;

        /* Esse if serve para nao multiplicar o numero que encerra
         * o while, que sera um numero negativo
         */
        if(num >= 0) 
        {
            multi = multi * v1[num];
        }
    }
    cout << multi << endl;
    return 0;
}
