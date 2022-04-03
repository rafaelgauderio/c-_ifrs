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

    string nome ("Rafael de Luca");
    cout << "size:" << nome.size() << "\n";
    cout << "length: " << nome.length() << "\n";
    cout << "capacity (memory size allocated for string): " << nome.capacity() << "\n";
    cout << "max_size: " << nome.max_size() << "\n";

    return 0;
}
