int mipin = 1;
int esperar = 1000;
int esperar2 = 500;
int esperar3 = 2000;
float mipin2 = 0.5; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(7, HIGH);
delay(esperar2);
digitalWrite(7, LOW);
delay(esperar2);
digitalWrite(8, HIGH);
delay(esperar2);
digitalWrite(8, LOW);
delay(esperar2);
digitalWrite(13, HIGH);
delay(esperar2);
digitalWrite(13, LOW);
delay(esperar2);
digitalWrite(4, HIGH);
delay(esperar2);
digitalWrite(4, LOW);
delay(esperar);

Serial.println(mipin2);
delay(esperar2);
Serial.println(mipin);
delay(esperar2);
Serial.println(mipin = mipin + 1);
delay(esperar2);

Serial.println("QUEEN");
delay(esperar3);
Serial.println("Turned away from it all like a blind man");
delay(esperar);
Serial.println("Sat on a fence but it don't work");
delay(esperar);
Serial.println("Keep coming up with love");
delay(esperar);
Serial.println("But it's so slashed and torn");
delay(esperar);
Serial.println("Why, why, why?");
delay(esperar);
Serial.println("Love, love, love, love, love");
delay(esperar);
Serial.println("Insanity laughs, under pressure we're breaking");
delay(esperar);
Serial.println("Can't we give ourselves one more chance");
delay(esperar);
Serial.println("Why can't we give love that one more chance");
delay(esperar);
Serial.println("Why can't we give love?");
delay(esperar);
Serial.println("Give love, give love, give love");
delay(esperar);
Serial.println("credits by. under pressure, queen - minutes 02:04 a 02:44");
}
