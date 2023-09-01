int tres, cuatro, cinco, multiplo; // variables de multiplos y multiplicadores
void setup()
{
  // put your setup code here, to run once:
  tres = 3;
  cuatro = 4;
  cinco = 5;
  multiplo = 1;
  Serial.begin(9600);
  Serial.println("Tabla del 3, el 4 y el 5 ");
}

void loop()
{
  Serial.print(multiplo);
  Serial.print("  x ");
  Serial.print(" TRES  = ");
  Serial.print(tres); // mostrar el valor en la consola
  Serial.print("   |   ");
  Serial.print(multiplo);
  Serial.print("  x ");
  Serial.print(" CUATRO  = ");
  Serial.print(cuatro);
  Serial.print("   |   ");
  Serial.print(multiplo);
  Serial.print("  x ");
  Serial.print(" CINCO  = ");
  Serial.println(cinco);

  multiplo = multiplo + 1; // sumar 1 al valor del multiplo
  tres = 3 * multiplo;     // multiplicar el valor de tres * el último múltiplo
  cuatro = 4 * multiplo;
  cinco = 5 * multiplo;

  delay(1000);
}
