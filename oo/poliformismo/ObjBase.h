#ifndef OBJBASE_H_
#define OBJBASE_H_


using namespace std;

class ObjBase {

public:
	ObjBase();
	std::string getName() const;
	void setName(string name);
	void showName();
	virtual void print();
	virtual ~ObjBase();


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
	cout << "O nome é " << getName() << "\n" <<endl;
}

void ObjBase::print() {
	cout << "O nome é " << getName() << "\n" <<endl;
}

ObjBase::~ObjBase() {

}



class ObjInt: public ObjBase {

public:
	ObjInt();
	void setInt(int inteiro);
	int getInt();
	virtual void print();


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

void ObjInt::print() {
    cout << "O nome é " << getName() << endl;
    cout << "O valor inteiro é " << getInt() << "\n" << endl;

}

class ObjDouble: public ObjBase {

public:
	ObjDouble();
	void setDouble(double decimal);
	double getDouble();
	virtual void print();

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

void ObjDouble::print() {
    cout << "O nome é " << getName() << endl;
    cout << "O valor decimal é " << getDouble() << "\n" << endl;

}
