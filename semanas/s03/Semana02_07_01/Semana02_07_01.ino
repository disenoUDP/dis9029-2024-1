int dia, semana;
void setup() {
  // put your setup code here, to run once:
    dia = 0;
    semana = 1;
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
dia = dia + 1;
Serial.print("dia:");
Serial.println(dia);
delay(1000);

if(dia == 7) {
    Serial.print("semana:");
    Serial.println(semana);
    dia = 0;
    semana = semana + 1;
}


}