// matrizes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, k, matrix[3][3];

    int soma = 0;

    string nome, turma;

    cout << "digite o nome" << endl;
    getline(cin, nome);

    cout << "digite a turma" << endl;
    getline(cin, turma);

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            cout << "introduza o valor da linha " << i << " coluna " << k << ":";
            cin >> matrix[i][k];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            cout << matrix[i][k] << " ";
        }
        cout << "\n";
    }

    cout << "\nDiagonal primária: \n";

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            if (i == k)
            {
                cout << matrix[i][k] << " ";
                soma = soma + matrix[i][k];
            }
        }
    }

    cout << "\n" << "O valor da soma da matriz e : " << soma << endl;

    cout << "Trabalho foi corrido pelo(a): " + nome + " da turma " + turma << endl;

    system(EXIT_SUCCESS);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Prokect > Add New Item to create new code files, or Prokect > Add Existing Item to add existing code files to the prokect
//   6. In the future, to open this prokect again, go to File > Open > Prokect and select the .sln file
