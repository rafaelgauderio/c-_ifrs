#include <stdio.h>
#include <iostream>
#include "Fracao.h"
#include <string>

using namespace std;

int main() {

	Fracao *fracao = new Fracao();
	fracao->setNumerador(2);
	fracao->setDenominador(3);
	cout << fracao->getFracao();

	Fracao novaFracao2(0,4);
	Fracao novaFracao3(5);
	Fracao novaFracao4(3,1);

	cout << novaFracao2.getFracao();
	cout << novaFracao3.getFracao();
	cout << novaFracao4.getFracao();

	//mais alguns testes
	Fracao novaFracao5(5,0);
	Fracao novaFracao6(9,15);
	Fracao novaFracao7(6,2);

    cout << novaFracao5.getFracao();
	cout << novaFracao6.getFracao();
	cout << novaFracao7.getFracao();

	//liberando a memoria do ponteiro
	delete fracao;


	return 0;

}


