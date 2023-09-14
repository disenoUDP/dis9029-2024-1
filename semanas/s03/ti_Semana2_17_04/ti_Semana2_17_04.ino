/**
 * Buen trabajo utilizando las limitaciones
 * de la tarea generando un output gráfico con intención,
 * pero llega a 12 y se vuelve en valores estáticos.
 *
 * Es importante realizar comentarios que ayuden a revisar
 * el código para reutilizar alguna de sus partes.
 */
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
