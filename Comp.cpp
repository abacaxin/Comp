#include "Comp.h"

Comp::Comp(int pin){
	pinMode(pin, OUTPUT);
	pino = pin;
}

void Comp::on(){
	digitalWrite(pino, HIGH);
}

void Comp::off(){
	digitalWrite(pino, LOW);
}

void Comp::change(){
	digitalWrite(pino, !digitalRead(pino));
}