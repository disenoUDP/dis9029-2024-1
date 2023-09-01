float segundos, minutos;
void setup() {
  // put your setup code here, to run once:
minutos = (segundos);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
segundos = Serial.print(segundos = segundos + 1);//contador de segundos
delay(1000);
Serial.println(minutos = minutos + 1);//contador de minutos
delay(1000);
}
