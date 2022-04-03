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

    //atribuição de strings
    string nome, inicial, concatenar;
    nome = "Rafael";
    string sobrenome ("De Luca");
    inicial ='r';
    concatenar = inicial + " " +  nome + " " + sobrenome;
    cout  << concatenar << "\n\n";

    //concatenando
    string scheme ("https://"), hostname,hipertext;
    hipertext= "www.";
    hostname  = "delucahigiene.com.br";
    string url = scheme + hipertext + hostname;
    cout << url << "\n\n";










    return 0;
}
