
const int buttonPin = 2;  
const int ledPin = 13;    

int buttonState = 0;      
int lastButtonState = 0;  
int ledState = LOW;       

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);   

  Serial.begin(9600);       
}

void loop() {
  
  buttonState = digitalRead(buttonPin);

  
  Serial.println(buttonState);

  
   
  if (buttonState != lastButtonState) {
    if (buttonState == LOW) {

      ledState = !ledState;
      digitalWrite(ledPin, ledState);
    }
    delay(50);  
  }
  lastButtonState = buttonState;
}