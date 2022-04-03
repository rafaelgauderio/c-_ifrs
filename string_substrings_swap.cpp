//============================================================================
// Name        : cpp_ifrs.cpp
// Author      : Rafael De Luca
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <iostream>
#include <locale.h>
#include <string>


using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");

    string frase = "A religi�o � um insulto � dignidade humana.\n"
    		"Com ou sem ela, ter�amos pessoas boas fazendo coisas boas e pessoas m�s fazendo coisas m�s.\n"
    		"Mas para pessoas boas fazerem coisas m�s, precisa-se de religi�o.\n"
    		"Steven Weinberg";
    string palavra = frase.substr(16,7);
    size_t posicao = frase.find("Mas");

    //do mas em diante
    string finalDaFrase = frase.substr(posicao);

    cout << frase << "\n" << palavra << "\n" << posicao << "\n" << finalDaFrase << endl;

    //trocando strings de valor
    string comprador ("dinheiro");
    string vendedor ("mercadorias");

    cout << "\nAntes da troca, o comprador tem " << comprador;
    cout << " e o vendedor tem " << vendedor << ".\n";

    vendedor.swap(comprador);

    cout << "\nDepois da opera��o de swap, o comprador tem " << comprador ;
    cout << " e o vendedor tem " << vendedor << ".\n";

    return 0;
}
