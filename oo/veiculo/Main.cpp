#include <iostream>
#include "Veiculo.h";

using namespace std;

int main() {

	Moto *m1 = new Moto();


	m1->rodas=2;
	m1->velocidade=35;
	m1->setVelMaxima(250);

	cout << "Número de rodas: " <<  m1->rodas << endl;
	cout << "Valor da Blindagem: " << m1->blindagem << endl;
	cout << "Valor Velocidade: " << m1->velocidade << " km/h " << endl;


	m1->impressao();

	Carro *carro1 = new Carro();
	carro1->impressao();




	return 0;
}



