#include <cstdlib>  
#include <iostream>


using namespace std;



int main(int args, char* argv[])
{
    /* Programa que calcula a �rea de um c�rculo
    dada a medida do seu raio*/

    int raio;      //declara��o da variavel raio//
    float pi, area; //declara��o das variaves pi e area//

    cout << "Digite a medida do raio";   //instru��es de escrita//
    cin >> raio;   //ler raio///

    pi = 3.14;
    area = pi * raio * raio;


    cout << "Area=" << area << "\n";


    system("PAUSE");
    return EXIT_SUCCESS;
}

