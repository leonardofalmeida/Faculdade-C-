/*
 * Faça um programa que leia vários números inteiros, armazenando-os num vetor.
 *
 * Depois determine se esse vetor é um palíndromo ou não.
 *
 * Em caso positivo, escreva 1, em caso negativo, escreva 0.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    int tamanho;
    bool naoPalindromo = false;
    cin >> tamanho;
    int v[tamanho], i, j;
    for(i = 0; i < tamanho; ++i)
    {
        cin >> v[i];
    }

    /* Esse for percorre o a partir vetor do indice inicial "i"
     * e do indice final "j", caso alguma posiçao "simetrica" nao
     * seja igual, nao e um palindromo e encerra o for.
     */
    for(i = 0, j = tamanho - 1; i < j; ++i, --j)
    {
        if(v[i] != v[j])
        {
            naoPalindromo = true;
            i = j;
        }
    }
    if(naoPalindromo)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}
