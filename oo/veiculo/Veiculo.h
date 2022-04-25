#ifndef VEICULO_H_
#define VEICULO_H_

class Veiculo {
public:
	int velocidade;
	int blindagem;
	int rodas;

	void setTipo(int tipo);
	void setVelMaxima(int velMax);
	void setArma(bool arma);
	int getTipo() const;
	int getVelMaxima() const;
	bool isArma() const;
	void impressao();

private:
	int tipo;
	int velMaxima;
	bool arma;

};

void Veiculo::setTipo(int tipo) {
	this->tipo = tipo;

}
void Veiculo::setVelMaxima(int velMax) {
	this->velMaxima = velMax;

}
void Veiculo::setArma(bool arma) {
	this->arma = arma;
}

bool Veiculo::isArma() const {
	return arma;
}

int Veiculo::getTipo() const {
	if (tipo==1) {
		std::cout << "Ve�culo � uma Moto!" << std::endl;
	} else if (tipo==2) {
		std::cout << "Ve�culo � um Carro de passeio!" << std::endl;
	}
	return tipo;
}

int Veiculo::getVelMaxima() const {
	return velMaxima;
}

void Veiculo::impressao() {

	std::cout << "\n\nN�mero de rodas: " << rodas << std::endl;
	std::cout << "Valor da Blindagem: " << blindagem << std::endl;
	std::cout << "Valor Velocidade: " << velocidade << " km/h "	<< std::endl;
	std::cout << "Tipo de veiculo: " << getTipo() << std::endl;
	std::cout << "Vecolidade M�xima: " << getVelMaxima() << " km/h "<< std::endl;
	std::cout << "Possui Armamento? " << isArma() << std::endl;
}

#endif /* VEICULO_H_ */

class Moto: public Veiculo {

	//construtor
public:
	Moto();

};
Moto::Moto() {
	velocidade = 0;
	blindagem = 1;
	rodas = 2;
	setTipo(1);
	setVelMaxima(120);
	setArma(false);
}

class Carro: public Veiculo {
public:
	Carro();
};

//construtor do carro j� com valores default de inicializa��o
Carro::Carro() {
	velocidade = 0;
	blindagem = 2;
	rodas = 4;
	setTipo(2);
	setVelMaxima(320);
	setArma(true);
}



