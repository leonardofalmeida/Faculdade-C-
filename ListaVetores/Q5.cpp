/*
 * Faça um programa para controlar o estoque de mercadorias de uma empresa.
 *
 * Inicialmente, o programa deverá preencher dois vetores com dez posições cada,
 * onde o primeiro corresponde aos códigos dos produtos e o segundo aos totais desses produtos em estoque.
 *
 * Logo após, o programa deverá ler um conjunto indeterminado de dados,
 * contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a quantidade.
 *
 * Código do cliente igual a zero indica o fim do programa. O programa deverá verificar:
 *
 * 1) Se o código do produto solicitado existe. Se existir, tentar atender ao pedido;
 * caso contrário, contabilizar em um total de pedidos não atendidos por produtos inexistentes;
 *
 * 2) Cada pedido feito por um cliente só pode ser atendido integralmente.
 * Se for possível deve ser dada baixa no estoque. Caso contrário, deve-se contabilizar em um total de pedidos não atendidos.
 *
 * No final o programa deve escrever os códigos dos produtos com seus respectivos estoques já atualizados,
 * a quantidade de pedidos não atendidos por produtos inexistentes, e a quantidade de pedidos não atendidos integralmente.
 *
 */

#include <iostream>

using namespace std;

int main ()
{
    int vCodigos[10], vQuantidades[10], i, cliente = 1, codigoP, quantidades;
    int naoAtendidos = 0, naoExiste = 0, estoque;
    bool produtoExiste;
    for(i = 0; i < 10; ++i)
    {
        cin >> vCodigos[i];
    }
    for(i = 0; i < 10; ++i)
    {
        cin >> vQuantidades[i];
    }
    while(cliente != 0)
    {
        cin >> cliente >> codigoP >> quantidades;
        produtoExiste = false; // no começo produto nao existe
        for(i = 0; i < 10; ++i) 
        {
            if(codigoP == vCodigos[i]) //verifica todos codigos
            {
                produtoExiste = true; // se entrar, quer dizer que existe
                estoque = vQuantidades[i] - quantidades;

                /* Se nao tiver o produto disponivel no estoque, atualiza
                 * o numero de pedidos nao atendidos, senao, atualiza estoque
                 */
                if(estoque < 0)
                {
                    naoAtendidos = naoAtendidos + 1;
                }
                else
                {
                    vQuantidades[i] = estoque;
                }
            }
        }
        if(produtoExiste == false && cliente != 0) // so vai entrar aqui, caso nao exista o produto
        {
            naoExiste = naoExiste + 1;
        }
    }
    for(i = 0; i < 10; ++i)
    {
        cout << vCodigos[i] << " " << vQuantidades[i] << endl;
    }
    cout << naoExiste << endl << naoAtendidos << endl;
    return 0;
}

