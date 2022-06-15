#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string texto, texto2;

    ofstream ficheirow("ficheiro.txt");

    cout << "Introduza algo" << endl;

    cin >> texto;

    ficheirow << texto;

    ficheirow.close();

    ifstream ficheiror("ficheiro.txt");

    while (getline (ficheiror, texto2))
    {
        cout << texto2 << endl;
    }

    ficheiror.close();
}