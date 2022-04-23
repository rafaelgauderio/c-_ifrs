# include "Fracao.h"
# include <stdio.h>
# include <string>
#include <iostream>

	using namespace std;

	Fracao::Fracao() {

	}

	Fracao::Fracao(int numerador, int denominador) {
		this->numerador=numerador;
		this->denominador=denominador;
	}


	void Fracao::setNumerador(int numero) {
		this->numerador=numero;
	}


	int Fracao::getNumerador()  {
			return numerador;
	}

	void Fracao::setDenominador(int denominador) {
		this->denominador = denominador;
	}

	int Fracao::getDenominador()  {
			return denominador;
	}

	void Fracao::getFracao() {

		if(getDenominador()==1) {

			std::cout << "Fracao: " << getNumerador() <<endl;

		} else if (getDenominador()==0) {
			std::cout << "Fracao: Impossível divisão por zero. "  <<endl;
		} else if (getNumerador()==0) {
			std::cout << "Fracao: 0 "  <<endl;
		} else {
			std::cout << "Fracao: " << getNumerador() << "/" << getDenominador() <<endl;
		}



	}











