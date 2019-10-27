/*
	ARD-RELAY TEST CODE
*/

int relay1 = 7;
int relay2 = 6;
int relay3 = 5;
int relay4 = 4;

int pause = 2000;

void setup(){
	pinMode(relay1, OUTPUT);
	pinMode(relay2, OUTPUT);
	pinMode(relay3, OUTPUT);
	pinMode(relay4, OUTPUT);
}

void loop(){

	digitalWrite(relay1, LOW);
	digitalWrite(relay2, HIGH);
	delay(pause);

	digitalWrite(relay2, LOW);
	digitalWrite(relay3, HIGH);
	delay(pause);

	digitalWrite(relay3, LOW);
	digitalWrite(relay4, HIGH);
	delay(pause);

	digitalWrite(relay4, LOW);
	digitalWrite(relay1, HIGH);
	delay(pause);

}