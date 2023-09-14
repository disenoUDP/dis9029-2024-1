// El primer intento no tiene las variables necesarias tampoco las declaraciones de funciones para imprimir en la consola. Esos eran los objetivos de la tarea.
int pinled = 8;
int speed = 300;
void setup()
{
    pinMode(pinled, OUTPUT);
}
void loop()
{
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    delay(700);
    digitalWrite(9, HIGH);
    delay(250);
    digitalWrite(9, LOW);
    delay(250);
    digitalWrite(10, HIGH);
    delay(125);
    digitalWrite(10, LOW);
    delay(125);
}