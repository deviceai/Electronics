/*
	SIM800L terminal
*/

#include <SoftwareSerial.h>

SoftwareSerial SIM800_SERIAL(2, 3);

void setup(){

	Serial.begin(19200);
	SIM800_SERIAL.begin(2400);

	delay(1000);
	Serial.println("SIM800 Terminal Ready");

}

void loop(){

	//READ SIM800 OUTPUT AND SHOW IN TERMINAL
	if(SIM800_SERIAL.available()){
		Serial.write(SIM800_SERIAL.read());
	}

	//READ TERMINAL COMMAND AND SEND TO SIM800
	if(Serial.available()){
		SIM800_SERIAL.write(Serial.read());
	}
}