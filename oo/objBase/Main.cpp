#include <iostream>
#include <string>
#include "ObjBase.h"


using namespace std;

int main() {


	ObjBase *objeto1 = new ObjBase();
	objeto1->setName("Rafael De Luca");
	objeto1->showName();

	ObjInt *objetoInteiro = new ObjInt();
	objetoInteiro->setInt(35);
	objetoInteiro->showName();
	cout << "O valor do número inteiro: " << objetoInteiro->getInt() << endl;

	ObjDouble *objetoDecimal = new ObjDouble();
	objetoDecimal->setDouble(17.22);
	objetoDecimal->showName();
	cout << "O valor do número decimal: " << objetoDecimal->getDouble() << endl;

	delete objetoDecimal;
	delete objetoInteiro;
	delete objeto1;



	return 0;
}



