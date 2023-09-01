float segundos, minutos;
void setup() {
  // put your setup code here, to run once:
segundos = 00;
minutos = 00;
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(segundos = segundos + 1);//contador de segundos
delay(1000);
Serial.print(minutos = minutos + 1);//contador de minutos
delay(60000);
}
