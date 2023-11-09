int pinIn = 7;
char charIn;
int bits[8];


void setup() {
  Serial.begin(1200);
  pinMode(pinIn, INPUT);

}

void loop() {

  int numberIn = 0;

  if(digitalRead(pinIn) == LOW)
  {
    Serial.println("Pin di start arrivato:");
    delayMicroseconds(1200);
    Serial.print("Bits: ");

    for(int i = 7; i>=0;i--)
    {
      if(digitalRead(pinIn) == LOW)
      {
        bits[i] = 0;
        Serial.print(bits[i]);
        
      }else 
      {
        bits[i] = 1;
        Serial.print(bits[i]);
        numberIn = numberIn + pow(2, i);
      }
      
      delayMicroseconds(833);
    }
    Serial.println();

    //Serial.print("Numero In Ingresso = ");
    //Serial.println(numberIn);
    //charIn = numberIn;
    //Serial.println("Carattere In Ingresso = ");
    //Serial.println(charIn);
  }

  

}
