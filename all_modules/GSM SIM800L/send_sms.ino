/*
	SIM800L send sms
*/

#include <SoftwareSerial.h>

SoftwareSerial SIM800_SERIAL(2, 3);

String sms_text = "Hi, sms from device.ai!"; //sms text here
String phone = "+37255444555"; //CHANGE THIS NUMBER


void setup(){

	Serial.begin(9600);
	SIM800_SERIAL.begin(9600);

	delay(2000);

	//Init settings:
	SIM800_SERIAL.println("AT+CLIP=1");
	delay(100);
	SIM800_SERIAL.println("AT+CMGF=1");
	delay(100);
	SIM800_SERIAL.println("AT+CSCS=\"GSM\"");
	delay(100);


	Serial.print("SENDING SMS...");
	SEND_SMS(sms_text, phone);
	Serial.println("SENDED!");
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


void SEND_SMS(String text, String phone) {

	SIM800_SERIAL.println("AT+CMGS=\"" + phone + "\"");
	delay(100);
	SIM800_SERIAL.print(text);
	delay(000);
	SIM800_SERIAL.print((char)26);
	delay(100);
}