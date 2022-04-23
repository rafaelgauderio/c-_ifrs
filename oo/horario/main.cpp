#include <stdio.h>
#include <iostream>
#include "tempo.h"
#include <string>

int main() {

	Tempo horarioNovo;
	horarioNovo.setHour(15);
	horarioNovo.setMinute(59);
	//Mesmo sem setar um valor para segundo, vai imprimir 10 porque foi setado como valor padrão
	horarioNovo.impressaoPadrao();

	Tempo horarioNovo2;
	horarioNovo2.setTime(3,15,20);
	horarioNovo2.impressaoPadrao();


	cout << "Hora: " << horarioNovo.getHour() << "\n";
	cout << "Minuto: " << horarioNovo.getMinute() << "\n";
	cout << "Segundo: " << horarioNovo.getSecond() << "\n";


	return 0;
}






