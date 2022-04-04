//============================================================================
// Name        : topicos_especiais.cpp
// Author      : Rafael De Luca
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	ostringstream oss;
	int numeros;
	string stringDeNumeros;

	cout << "Informe vários números inteiros: (digite -1 para encerrar o programa)\n";
	while (numeros != -1) {
		cin >> numeros;
		if (numeros != -1) {
			oss << oct << showbase << numeros << " " << showbase << hex << numeros << "\n";
		}
	}
	stringDeNumeros = oss.str();

	size_t posicaoEncontrada = stringDeNumeros.find("0x");

	while (posicaoEncontrada != string::npos) {
		stringDeNumeros.replace(posicaoEncontrada,2,"HEXA");
		posicaoEncontrada = stringDeNumeros.find("0x");
	}

	cout << stringDeNumeros << endl;



return 0;
}


