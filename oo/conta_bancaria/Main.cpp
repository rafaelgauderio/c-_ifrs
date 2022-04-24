# include "Conta.h"
# include <iostream>
# include <string>

using namespace std;

int main () {

	Conta contaRafael;

	contaRafael.inicializa(14253,"Rafael De Luca", 500.50);
	contaRafael.deposita(900);
	contaRafael.consulta();
	contaRafael.saque(200);
	contaRafael.consulta();
	contaRafael.saque(2500);

	Conta *novaConta = new Conta(15153,"Juliana",900.90);


	novaConta->deposita(500);
	novaConta->consulta();
	novaConta->saque(100.50);
	novaConta->consulta();




	return 0;

}




