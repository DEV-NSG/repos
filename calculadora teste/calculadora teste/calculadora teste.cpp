#include <iostream>

using namespace std;

double somar(double a, double b)
{
    return a + b;
}

double subtrair(double a, double b)
{
    return a - b;
}

double multiplicar(double a, double b)
{
    return a * b;
}

double dividir(double a, double b)
{
    return a / b;
}

void menu()
{
    cout << "1. Somar" << endl;
    cout << "2. Subtrair" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Sair" << endl;
};

int calculadora()
{
    int esc;
    menu();
    cout << "Qual operacao deseja realizar? " << endl;
    cin >> esc;
    if (esc < 1 || esc > 5)
    {
        cout << "Escolha inválida\n";
        return 0;
    }
    else
        if (esc == 5) {
            cout << "Obrigado por usar a nossa calculadora !!!\nJoão Moreira : Miguel Tavares : Francisco Calixto : Eduardo Camões\n";
            //system("pause");
            exit (EXIT_SUCCESS);
            return 0;
        }
        else
        {
            double a, b;

            cout << "Introduza um número: " << endl;
            cin >> a;
            cout << "Introduza outro número: " << endl;
            cin >> b;

            switch (esc)
            {
            case 1:
                cout << "O resultado da soma é: " << somar(a, b) << endl;
                break;
            case 2:
                cout << "O resultado da subtracao é: " << subtrair(a, b) << endl;
                break;
            case 3:
                cout << "O resultado da multiplicacao é: " << multiplicar(a, b) << endl;
                break;
            case 4:
                if (b != 0)
                {
                    cout << "O resultado da divisao é: " << dividir(a, b) << endl;
                }
                else
                {
                    cout << "Número inválido!!!" << endl;
                }
                break;
            case 5:

                break;
            default:
                cout << "escolha inválida" << endl;
                return 0;
                break;
            }
            return 1;
        }
}

int main()
{
    string ola;
    do
    {
        calculadora();
        cout << "Queres fazer outra operacao? (s / n)" << endl;
        cin >> ola;
    } while (ola == "s");

    if (ola == "n" && ola != "s")
    {
        cout << "Obrigado por usar a nossa calculadora !!!\n: 20 DEMON STUDIOS :";
    }

    while (ola != "n" && ola != "s") {
        cout << "Queres fazer outra operacao? (s / n)" << endl;
        cin >> ola;
    }
}
