/*
 * Faça um programa com um vetor de tamanho n que irá receber um conjunto de caracteres.
 *
 * O tamanho n deverá ser lido antes dos caracteres.
 *
 * O programa deve ler mais 2 caracteres que servirão como marcadores.
 *
 * O programa, então, deverá escrever os caracteres do conjunto que estão entre os dois caracteres digitados como marcadores.
 *
 * Os marcadores não precisam estar em ordem, ou seja, o primeiro marcador não necessariamente precisa vir antes do segundo.
 *
 */



#include <iostream>

using namespace std;

int main ()
{
    int tamanho, indice1, indice2;
    cin >> tamanho;
    char v[tamanho];
    char delimitador1, delimitador2, aux;

    for(int i = 0; i < tamanho; ++i)
    {
        cin >> v[i];
    }
    cin >> delimitador1 >> delimitador2;

    //Teste para saber qual letra é a primeira
    // no alfabeto
    if(delimitador1 > delimitador2)
    {
        aux = delimitador1;
        delimitador1 = delimitador2;
        delimitador2 = aux;
    }

    //Descobre os indices limitadores
    for(int i = 0; i < tamanho; ++i)
    {
        if(v[i] == delimitador1)
        {
            indice1 = i;
        }
        if(v[i] == delimitador2)
        {
            indice2 = i;
        }
    }

    //Imprime o que está entre os indices delimitadores
    for(int i = indice1 + 1; i < indice2; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
        
