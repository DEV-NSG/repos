// Estruturas de dados compostas - Exercício.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // class structure that has a name, firt test, second test and average grade in both tests
    struct turma {
        string nome;
        float teste1, teste2, media;
    };

    turma aluno[3];

    // insert first student details
    cout << "Introduza os detalhes do(a) primeiro(a) aluno(a)" << endl;
    cout << "Nome" << endl;
    cin >> aluno[0].nome;
    cout << "Nota do primeiro teste" << endl;
    cin >> aluno[0].teste1;
    cout << "Nota do segundo teste" << endl;
    cin >> aluno[0].teste2;
    // insert second student details
    cout << "Introduza os detalhes do(a) segundo(a) aluno(a)" << endl;
    cout << "Nome" << endl;
    cin >> aluno[1].nome;
    cout << "Nota do primeiro teste" << endl;
    cin >> aluno[1].teste1;
    cout << "Nota do segundo teste" << endl;
    cin >> aluno[1].teste2;
    // insert third student details
    cout << "Introduza os detalhes do(a) terceiro(a) aluno(a)" << endl;
    cout << "Nome" << endl;
    cin >> aluno[2].nome;
    cout << "Nota do primeiro teste" << endl;
    cin >> aluno[2].teste1;
    cout << "Nota do segundo teste" << endl;
    cin >> aluno[2].teste2;

    // calculates and attributes each student his/her average grade
    aluno[0].media = (aluno[0].teste1 + aluno[0].teste2) / 2;
    aluno[1].media = (aluno[1].teste1 + aluno[1].teste2) / 2;
    aluno[2].media = (aluno[2].teste1 + aluno[2].teste2) / 2;

    // prints each student's average grade
    cout << "A media do(a) aluno(a) " << aluno[0].nome << " e " << aluno[0].media << endl;
    cout << "A media do(a) aluno(a) " << aluno[1].nome << " e " << aluno[1].media << endl;
    cout << "A media do(a) aluno(a) " << aluno[2].nome << " e " << aluno[2].media << endl;


}