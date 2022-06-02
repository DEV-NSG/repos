#include <iostream>

using namespace std;

int main()
{
	struct funcionario {
		string nome, motor, modelo;
		float potencia;
		
	};

    funcionario jose;

	funcionario diogo;

	jose.nome = "José Carvalho";
	jose.motor = "R3v10a3";
	jose.modelo = "Audi R3a3";
	jose.potencia = 599.43;

	diogo.nome = "Diogo Percheiro";
	diogo.motor = "A45v12tr10k";
	diogo.modelo = "Mercedes A45 v12 10k torque";
	diogo.potencia = 981.3;

	cout << "Nome: " << diogo.nome << " Motor desenvolvido: " << diogo.motor << " Para o carro: " << diogo.modelo << " com: " << diogo.potencia << " de potencia" << endl;
	return 0;
}
