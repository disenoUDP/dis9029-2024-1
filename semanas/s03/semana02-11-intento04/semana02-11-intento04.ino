int paginas = 10;
int c = 1;
int dias = 5;
float hora = 0.5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("He leido ");
  Serial.print(paginas);
  Serial.print(" páginas ");
  Serial.print("durante ");
  Serial.print(hora);
  Serial.print(" horas ");
  Serial.print("y voy en el capítulo ");
  Serial.print(c);
  Serial.println(".");
  c = c+1;
  paginas = paginas+10;
  dias= dias+10;
  hora = hora + 0.4;
  delay(1000);




}
