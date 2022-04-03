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
	string phrase("Há cinco agulhas neste palheiro com agulhas.");
	string word = "agulha";

	cout <<string::npos << "\n";
	cout <<string::npos-10 << "\n";
	cout <<string::npos+1 << "\n";


	cout << "Tamanho da frase: " << phrase.size() << "\n";
	cout << "Mas as posições variam entre: 0 e 43" << endl;



	size_t position = phrase.find("H");
	if (position != string::npos) {
		cout << "Foi encontrada a palabra H na posicao: " << position << endl;

	}
	size_t encontrado = phrase.find(word);
	encontrado = phrase.find(".");
	if (encontrado != string::npos) {
		cout << "Ponto encontrado na posicao: " << encontrado << endl;
	}

	if (encontrado != string::npos)
		cout << "Primeira palava agulha encontrada na posicao: " << encontrado
				<< "\n\n";

	encontrado = phrase.find("agulhas são finas e perigosas", encontrado + 1,
			6);
	if (encontrado != string::npos)
		cout << "Seguda palava agulha encontrada na posicao: " << encontrado
				<< "\n\n";

	encontrado = phrase.find("palheiro");
	if (encontrado != string::npos)
		cout << "'palheiro' foi encontrada na posicao: " << encontrado
				<< "\n\n";

	position = phrase.find("cinco");
	if (position != string::npos) {
		cout << "Foi encontrada a palabra cinco na posicao: " << position
				<< endl;
	}

	return 0;
}
