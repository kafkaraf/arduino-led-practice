const int led = 10; //Pin Digital

void setup() {
	pinMode(led, OUTPUT); /Setup LED
}

void loop() {
	digitalWrite(led, HIGH); //Menyalakan LED
}
