const int led = 10;
int brightness = 0;
// Inisialisasi LED dengan Pin 10
// Inisialisasi Brightnness LED


void setup() {
	pinMode(led, OUTPUT); 
	//Setup LED
}

void loop() {
	
	for (brightness = 0; brightness <= 255; brightness += 5){
		analogWrite(led, brightness);
		delay(10);
		// Menaikan brightness dari 0 ke 255
	}

	for (brightness = 255; brightness >= 0; brightness -= 5){
		analogWrite(led, brightness);
		delay(10);
		// Turunkan brightness dari 0 ke 255

	}
}
