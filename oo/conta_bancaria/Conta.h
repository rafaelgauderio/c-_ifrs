# include <iostream>
#include <string>
#ifndef CONTA_H_
#define CONTA_H_

using namespace std;

class Conta {
private:
	long numero;
	string nome;
	float saldo;
public:
	Conta();
	Conta(long numero, string nome, float saldo=0);
	void inicializa(long numero,string nome, float saldo=0);
	void deposita(float valor);
	void saque(float valor);
	void consulta();
};






#endif /* CONTA_H_ */
