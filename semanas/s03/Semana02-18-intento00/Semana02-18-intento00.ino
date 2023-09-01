int tardanza = 500;
int tardanza2 = 1000; 
int tardanza3 = 1500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12, OUTPUT);
pinMode(7, OUTPUT);
pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(12, HIGH);
delay(tardanza);
digitalWrite(12, LOW);
delay(tardanza);
digitalWrite(2, HIGH);
delay(tardanza);
digitalWrite(2, LOW);
delay(tardanza);
digitalWrite(7, HIGH);
delay(tardanza);
digitalWrite(7, LOW);
delay(tardanza);
digitalWrite(12, HIGH);
delay(tardanza);
digitalWrite(12, LOW);
delay(tardanza);
digitalWrite(2, HIGH);
delay(tardanza);
digitalWrite(2, LOW);
delay(tardanza);
digitalWrite(7, HIGH);
delay(tardanza);
digitalWrite(7, LOW);
delay(tardanza2);

Serial.println("hotel california - eagles");
delay(tardanza3);
Serial.println("Welcome to the Hotel California");
delay(tardanza2);
Serial.println("Such a lovely place");
delay(tardanza);
Serial.println("(Such a lovely place)");
delay(tardanza2);
Serial.println("Such a lovely face");
delay(tardanza2);
Serial.println("Plenty of room at the Hotel California");
delay(tardanza2);
Serial.println("Any time of year");
delay(tardanza);
Serial.println("(Any time of year)");
delay(tardanza2);
Serial.println("You can find it here");
delay(tardanza2);
Serial.println("Her mind is Tiffany-twisted");
delay(tardanza3);
Serial.println("She got the Mercedes-Benz");
delay(tardanza2);
Serial.println("She got a lot of pretty, pretty boys");
delay(tardanza2);
Serial.println("That she calls friends");
delay(tardanza2);
Serial.println("How they dance in the courtyard");
delay(tardanza2);
Serial.println("Sweet summer sweat");
delay(tardanza2);
Serial.println("Some dance to remember");
delay(tardanza2);
Serial.println("Some dance to forget");
delay(tardanza2);
Serial.println("So I called up the captain");
delay(tardanza2);
Serial.println("Please, bring me my wine");
delay(tardanza2);
Serial.println("He said: We haven't had that spirit here since");
delay(tardanza2);
Serial.println("Nineteen sixty-nine");
delay(tardanza2);
Serial.println("And, still, those voices are calling from far away");
delay(tardanza2);
Serial.println("Wake you up in the middle of the night");
delay(tardanza2);
Serial.println("Just to hear them say");
delay(tardanza2);
Serial.println("credits by. hotel california, eagles - minutes 01:45 a 02:59");
}
