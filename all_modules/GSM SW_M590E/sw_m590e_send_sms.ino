// SMS SENDER - TEST PROGRAM
// 10.06.2016
// device.ai@gmail.com

//FOR ARDUINO MEGA

void setup(){
	
	Serial.begin(9600); //Serial for terminal information
	Serial1.begin(38400); //Serial for GSM module

	Serial.println("GSM tester v1.0");
	delay(100);

//Init settings:
	Serial1.println("AT+CLIP=1");
	delay(100);
	Serial1.println("AT+CMGF=1");
	delay(100);
	Serial1.println("AT+CSCS=\"GSM\"");
	delay(100);

}

void loop(){

	send_sms();
	delay(60000); //wait 60s
}

void send_sms(){

  	Serial.print("SENDING SMS: ");

	Serial1.println("AT+CMGS=\"+3725555555\"");  //chage this number!!!
	delay(100);
	Serial1.print("my some sms text");
	delay(100);
	Serial1.print((char)26); //char for end sms text

  	Serial.println("DONE!");
}