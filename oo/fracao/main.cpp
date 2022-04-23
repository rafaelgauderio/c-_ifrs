#include <stdio.h>
#include <iostream>
#include "Fracao.h"
#include <string>

int main() {

	Fracao *fracao = new Fracao();
	fracao->setNumerador(2);
	fracao->setDenominador(3);
	fracao->getFracao();

	Fracao novaFracao2(0,4);
	Fracao novaFracao3(5);
	Fracao novaFracao4(3,1);

	novaFracao2.getFracao();
	novaFracao3.getFracao();
	novaFracao4.getFracao();

	//mais alguns testes
	Fracao novaFracao5(5,0);
	Fracao novaFracao6(7,15);
	Fracao novaFracao7(19);

	novaFracao5.getFracao();
	novaFracao6.getFracao();
	novaFracao7.getFracao();

	//liberando a memoria do ponteiro
	delete fracao;


	return 0;

}

