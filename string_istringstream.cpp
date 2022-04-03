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
    string stringValues = "11 12 15 936 5 98 81";
    istringstream iss  (stringValues);

    for(int i=0;i<7; i++) {
    	int values;
    	iss >> values;
    	cout << "Triplo do valor informado: " << values*3 <<"\n" ;
    }


    return 0;
}
