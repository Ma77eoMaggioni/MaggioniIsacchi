int pinIn = 7;
char charIn;
int bits[8];
int tempo;


void setup() {
  Serial.begin(9600);
  pinMode(pinIn, INPUT);

}

void loop() {
  if(digitalRead(pinIn) == LOW)
  {
    tempo = millis();
    while((millis()-tempo) < 50)
    {
      if(digitalRead(pinIn) == LOW)
      {
        Serial.print("1");
      }else
      {
        Serial.print("0");
      }
      
    }
    Serial.println();
    
  }
}
