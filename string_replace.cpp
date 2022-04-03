//============================================================================
// Name        : cpp_ifrs.cpp
// Author      : Rafael De Luca
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <locale.h>
#include <stddef.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");
	string frase= "Onde existe vontande, existe um caminho";
	cout << frase << "\n";
	//começa na posicao 4 e substitui as próximas 7 caracteres pelo caracter informado
	frase.replace(4,7," há");
	cout << frase << "\n";
	frase.replace(18,7,"há ");
	cout << frase << "\n";

	string base = "This is a test string!";
	base.replace(8,6,"just a");
	cout << base << "\n";

	//substitui 1 ponto de explamação na posicao 21 por 15 pontos de interrogação
	base.replace(21,1,15,'?');
	cout << base << "\n";




	return 0;
}
