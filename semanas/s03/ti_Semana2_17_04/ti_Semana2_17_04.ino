float Base, Otro, Aquel, Tapa;
void setup()
{
  // put your setup code here, to run once:
  Base = 0.1;
  Tapa = 10;
  Otro = 1000000000;
  Aquel = 0.1;
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Otro = Base * Otro;
  Aquel = Aquel * Tapa;

  Serial.print(Otro);
  Serial.print("    ");
  Serial.print(Aquel);
  Serial.print("    ");
  Serial.print(Otro);
  Serial.print("    ");
  Serial.print(Aquel);
  Serial.print("    ");
  Serial.print(Otro);
  Serial.print("    ");
  Serial.println(Aquel);

  delay(1000);
}
