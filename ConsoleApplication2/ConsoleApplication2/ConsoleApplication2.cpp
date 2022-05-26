#include <cstdlib>  
#include <iostream>


using namespace std;



int main(int args, char* argv[])
{
    /* Programa que calcula a área de um círculo
    dada a medida do seu raio*/

    int raio;      //declaração da variavel raio//
    float pi, area; //declaração das variaves pi e area//

    cout << "Digite a medida do raio";   //instruções de escrita//
    cin >> raio;   //ler raio///

    pi = 3.14;
    area = pi * raio * raio;


    cout << "Area=" << area << "\n";


    system("PAUSE");
    return EXIT_SUCCESS;
}

