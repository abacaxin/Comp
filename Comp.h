#ifndef Comp_H
#define Comp_H

#include <Arduino.h>


class Comp{
public:
	
	Comp(int pin);
	void on();
	void off();
	void change();
	
private:

	int pino;
};


#endif