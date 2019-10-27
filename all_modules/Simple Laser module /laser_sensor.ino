/*
	LASER MODULE
*/

#define INPUT_PIN 12
#define LED_PIN 13

void setup(){
	pinMode(INPUT_PIN, INPUT);
	pinMode(LED_PIN, OUTPUT);
}

void loop(){
	if (digitalRead(INPUT_PIN) == HIGH){
		digitalWrite(LED_PIN, HIGH);
	}
	else 
		digitalWrite(LED_PIN, LOW);
}