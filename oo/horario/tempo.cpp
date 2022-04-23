#include <stdio.h>
#include <iostream>
#include "tempo.h"
#include <string>

Tempo::Tempo(int hora, int min, int sec) {
	setTime(hora, min, sec);
}

void Tempo::setHour(int hora) {
	hour=hora;
}

void Tempo::setMinute(int minuto) {
	minute=minuto;
}

void Tempo::setSecond(int segundo) {
	second=segundo;
}

void Tempo::setTime(int hora, int min, int sec) {
	setHour(hora);
	setMinute(min);
	setSecond(sec);
}

int Tempo::getHour() {
	return hour;
}

int Tempo::getMinute() {
	return minute;
}

int Tempo::getSecond() {
	return second;
}

void Tempo::impressaoPadrao() {
	std::cout << "Horario: " << getHour() << ":" << getMinute() << ":" << getSecond() << endl;
}

