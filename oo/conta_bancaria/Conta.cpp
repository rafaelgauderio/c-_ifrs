#include "Conta.h";
#include <iostream>
#include <string>

using namespace std;

//construtor
	Conta::Conta() {

	}

	Conta::Conta (long numero, string nome, float saldo) {
		this->numero=numero;
		this->nome=nome;
		this->saldo=saldo;
	}

void Conta::inicializa(long numero, string nome, float saldo) {
	this->numero=numero;
	this->nome=nome;
	this->saldo=saldo;
	if(saldo <0) {
		cout << "Conta não pode set saldo negativo!\n" << endl;
}
}

void Conta::deposita(float valor) {
	saldo += valor;
}

void Conta::saque(float valor) {
	if (saldo < valor) {
		cout << "Não foi possível realizar o saque. Seu saldo é R$ " << this->saldo << "\n" <<endl;
	} else {
		saldo -= valor;
		cout << "Saque realizado com sucesso!\n" << endl;
	}
}

void Conta::consulta() {
	cout << "Dados do correntista:\nNúmero da conta: " << this->numero <<  endl;
	cout << "Nome do correntista: " << this->nome << endl;
	cout << "Saldo Atualizado R$ " << this->saldo << "\n" << endl;


}


