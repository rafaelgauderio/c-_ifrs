# include "Fracao.h"
# include <stdio.h>
# include <string>
# include <iostream>
# include <sstream>

	using namespace std;
	using std::stringstream;
	using std::istringstream;

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

	std::string Fracao::getFracao() {

		std::string fracao = "";
		stringstream dd;
		stringstream nn;
		dd << getDenominador();
		nn << getNumerador();
		string den = dd.str();
		string num = nn.str();
		//std::string den = std::to_string(getDenominador());
		//std::string num = std::to_string(getNumerador());

		if(getDenominador()==1) {

			  fracao = fracao.append("Fracao: ").append(num).append("\n");

		} else if (getDenominador()==0) {
			fracao = fracao.append("Fracao: Impossível divisão por zero.\n");
		} else if (getNumerador()==0) {
			fracao = fracao.append("Fracao: 0\n");
		} else {
			fracao =  fracao.append("Fracao: ").append(num).append("/").append(den).append("\n");
		}

		return fracao;

	}
