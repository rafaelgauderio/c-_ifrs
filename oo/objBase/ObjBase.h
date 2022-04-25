#ifndef OBJBASE_H_
#define OBJBASE_H_


using namespace std;

class ObjBase {

public:
	ObjBase();
	std::string getName() const;
	void setName(string name);
	void showName();


protected:
	string name;

};


#endif

ObjBase::ObjBase() {

}

std::string ObjBase::getName() const {
	return name;
}

void ObjBase::setName(string name) {
	this->name = name;
}
void ObjBase::showName() {
	cout << "O nome é " << getName() << endl;
}



class ObjInt: public ObjBase {

public:
	ObjInt();
	void setInt(int inteiro);
	int getInt();

private:
	int inteiro;
};

ObjInt::ObjInt() {
	setName("Numero inteiro");
	setInt(0);
}

void ObjInt::setInt(int inteiro) {
	this->inteiro=inteiro;
}

int ObjInt::getInt() {
	return inteiro;
}

class ObjDouble: public ObjBase {

public:
	ObjDouble();
	void setDouble(double decimal);
	double getDouble();

private:
	double decimal;
};

ObjDouble::ObjDouble() {
	setName("Número decimal");
	setDouble(0.0);
}

void ObjDouble::setDouble(double decimal) {
	this->decimal=decimal;
}

double ObjDouble::getDouble() {
	return decimal;
}





