#ifndef FRACAO_H_
#define FRACAO_H_


class Fracao {

public:
	Fracao();
	Fracao (int, int=1);
	void setDenominador(int);
	int getDenominador();
	void setNumerador(int);
	int getNumerador();
	void getFracao();


private:
	int numerador;
	int denominador;

};

#endif /* FRACAO_H_ */
