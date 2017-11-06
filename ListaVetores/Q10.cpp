/*
 * Faça um programa que preencha um vetor com sete números inteiros,
 * calcule e mostre:
 *
 * 1) Os números múltiplos de 2;
 * 2) Os números múltiplos de 3;
 * 3) e os números múltiplos de 2 e 3.
 *
 * Os números múltiplos de 2 e 3 podem aparecer nos casos isolados.
 *
 * Caso não exista nenhum número em cada caso, o programa deve retornar 0 na respectiva saída.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    int v[7], i;
    bool existe = false;
    for(i = 0; i < 7; ++i)
    {
        cin >> v[i];
    }

    //Testa se é multiplo de 2, senao imprime 0
    for(i = 0; i < 7; ++i)
    {
        if(v[i] % 2 == 0)
        {
            cout << v[i] << " ";
            existe = true;
        }
    }
    if(existe == false)
    {
        cout << 0;
    }
    cout << endl;

    existe = false; // Está aqui para atualizar o existe, pro proximo for

    //Testa se é multiplo de 3, senao imprime 0
    for(i = 0; i < 7; ++i)
    {
        if(v[i] % 3 == 0)
        {
            cout << v[i] << " ";
            existe = true;
        }
    }
    if(existe == false)
    {
        cout << 0;
    }
    cout << endl;
    existe = false;

    //Testa se é multiplo de 2 e 3, senao imprime 0
    for(i = 0; i < 7; ++i)
    {
        if(v[i] % 2 == 0 && v[i] % 3 == 0)
        {
            cout << v[i] << " ";
            existe = true;
        }
    }
    if(existe == false)
    {
        cout << 0;
    }
    cout << endl;
    return 0;
}
