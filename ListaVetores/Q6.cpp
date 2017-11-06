/*
 * Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em um vetor.
 *
 * O programa deverá então descobrir e exibir o mês mais quente e o mais frio do ano. 
 *
 * Assuma que todos os dados de entrada serão fornecidos em uma mesma linha.
 *
 * Assuma também que não haverá empates em relação a quais são os meses mais frios e mais quentes do ano.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    float vTemp[12], maior, menor, mesFrio, mesQuente;
    int i;
    for(i = 0; i < 12; ++i)
    {
        cin >> vTemp[i];
    }

    //Define que a maior e a menor temperatura, é a primeira posição do vetor
    maior = vTemp[0];
    menor = vTemp[0];

    //Por causa das linhas acima, assumo que os indices do mes mais quente
    //e do mais frio, são o primeiro indice
    mesQuente = 0;
    mesFrio = 0;

    /*
     * Começo a comparar a partir do segundo indice
     * pra não comparar a maior e menor com ele mesmo
     *
     */
    for(i = 1; i < 12; ++i)
    {
        if(vTemp[i] > maior)
        {
            maior = vTemp[i];
            mesQuente = i;
        }
        if(vTemp[i] < menor)
        {
            menor = vTemp[i];
            mesFrio = i;
        }
    }

    //imprime os meses quentes
    if(mesQuente == 0)
    {
        cout << "janeiro" << endl;
    }
    else if(mesQuente == 1)
    {
        cout << "fevereiro" << endl;
    }
    else if(mesQuente == 2)
    {
        cout << "marco" << endl;
    }
    else if(mesQuente == 3)
    {
        cout << "abril" << endl;
    }
    else if(mesQuente == 4)
    {
        cout << "maio" << endl;
    }
    else if(mesQuente == 5)
    {
        cout << "junho" << endl;
    }
    else if(mesQuente == 6)
    {
        cout << "julho" << endl;
    }
    else if(mesQuente == 7)
    {
        cout << "agosto" << endl;
    }
    else if(mesQuente == 8)
    {
        cout << "setembro" << endl;
    }
    else if(mesQuente == 9)
    {
        cout << "outubro" << endl;
    }
    else if(mesQuente == 10)
    {
        cout << "novembro" << endl;
    }
    else
    {
        cout << "dezembro" << endl;
    }

    //Imprime os meses frios
    if(mesFrio == 0)
    {
        cout << "janeiro" << endl;
    }
    else if(mesFrio == 1)
    {
        cout << "fevereiro" << endl;
    }
    else if(mesFrio == 2)
    {
        cout << "marco" << endl;
    }
    else if(mesFrio == 3)
    {
        cout << "abril" << endl;
    }
    else if(mesFrio == 4)
    {
        cout << "maio" << endl;
    }
    else if(mesFrio == 5)
    {
        cout << "junho" << endl;
    }
    else if(mesFrio == 6)
    {
        cout << "julho" << endl;
    }
    else if(mesFrio == 7)
    {
        cout << "agosto" << endl;
    }
    else if(mesFrio == 8)
    {
        cout << "setembro" << endl;
    }
    else if(mesFrio == 9)
    {
        cout << "outubro" << endl;
    }
    else if(mesFrio == 10)
    {
        cout << "novembro" << endl;
    }
    else
    {
        cout << "dezembro" << endl;
    }
    return 0;
}
