#include <Comp.h>    //adicionando biblioteca


Comp Led(2);         //declarando o led

void setup(){
	Led.on();
	delay(1000);     //ligando led por 2 segundos	
}

void loop(){
    Led.change();
    delay(300);      //Piscando led continuamentne
}