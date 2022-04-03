//============================================================================
// Name        : cpp_ifrs.cpp
// Author      : Rafael De Luca
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <iostream>
#include <iomanip>
#include <locale.h>
#include <sstream>


using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");
    //construindo strings pegando vários dados do usuário ou direto do programa
    ostringstream oss;
    oss << "One hundread and two " << 102 << " One hundred and three " << 103 << "\n" << "New Line";
    string newString = oss.str();
    cout << newString << "\n";


    return 0;
}
