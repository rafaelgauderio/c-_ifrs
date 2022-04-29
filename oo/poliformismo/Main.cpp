#include <iostream>
#include <string>
#include "ObjBase.h"
#include <typeinfo>

using namespace std;

int main() {

	ObjBase *objeto1 = new ObjBase();
	objeto1->setName("Rafael De Luca");
	//objeto1->showName();
	//objeto1->print();

	ObjInt *objetoInteiro = new ObjInt();
	objetoInteiro->setInt(35);
	//objetoInteiro->showName();
	//cout << "O valor do número inteiro: " << objetoInteiro->getInt() << endl;
	//objetoInteiro->print();

	ObjDouble *objetoDecimal = new ObjDouble();
	objetoDecimal->setDouble(17.22);
	//objetoDecimal->showName();
	//cout << "O valor do número decimal: " << objetoDecimal->getDouble() << endl;
	//objetoDecimal->print();

	ObjBase *objeto3 = new ObjBase();
	objeto3->setName("Numero de Euler");
	ObjInt *objInt3 = new ObjInt("Inteiro Euler",2);
	ObjDouble *objDouble3 = new ObjDouble("Decimal Euller",2.71828);

	ObjBase *objArray[3];
	ObjBase **objArray2 = new ObjBase*[3];
	ObjBase *objArray3[3] = { objeto3, objInt3, objDouble3 };

	objArray[0] = objeto1;
	objArray[1] = objetoInteiro;
	objArray[2] = objetoDecimal;

	ObjBase *objeto2 = new ObjBase();
	objeto2->setName("Juliana");

	ObjInt *objetoInteiro2 = new ObjInt();
	objetoInteiro2->setName("Inteiro 27");
	objetoInteiro2->setInt(27);

	ObjDouble *objetoDecimal2 = new ObjDouble();
	objetoDecimal2->setName("Phi");
	objetoDecimal2->setDouble(3.1415);

	objArray2[0] = objeto2;
	objArray2[1] = objetoInteiro2;
	objArray2[2] = objetoDecimal2;

	cout << objeto1->getName() << endl;
	cout << (*objetoInteiro).getName() << endl;
	cout << objetoInteiro->getInt() << endl;
	cout << objetoDecimal->getName() << endl;
	cout << (*objetoDecimal).getDouble() << "\n" << endl;

	cout << "\n##Imprimindo dados do PRIMEIRO objeto##" << endl;

	for (int i = 0; i < 3; i++) {
		objArray[i]->print();
	}

	for (int j = 0; j < 3; j++) {
		std::cout << "deleting object of Array " << typeid(*objArray[j]).name()
				<< endl;
		delete objArray[j];
	}



	cout << "\n##Imprimindo dados do SEGUNDO objeto##" << endl;

	for (int i = 0; i < 3; i++) {
		objArray2[i]->print();
	}

	for (int j = 0; j < 3; j++) {
		std::cout << "deleting object of Array2 "
				<< typeid(*objArray2[j]).name() << endl;
		//delete objArray2[j];
	}

	delete[] objArray2;

	cout << "\n##Imprimindo dados do TERCEIRO objeto##" << endl;

	for (int i = 0; i < 3; i++) {
		objArray3[i]->print();
	}

	for (int j = 0; j < 3; j++) {

		std::cout << "deleting object of Array3 "
				<< typeid(*objArray3[j]).name() << endl;
		//delete objArray3[j];
	}
	delete [] objArray3;

	//delete objetoDecimal;
	//delete objetoInteiro;
	//delete objeto1;

	return 0;
}

