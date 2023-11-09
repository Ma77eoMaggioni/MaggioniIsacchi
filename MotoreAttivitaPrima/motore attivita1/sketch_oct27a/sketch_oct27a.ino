int pinVelocita = 5;
int pinDestra = 6;
int pinSinistra = 7;
int pinIn = A0;

void setup() {

  Serial.begin(9600);
  pinMode(pinVelocita, OUTPUT);
  pinMode(pinDestra, OUTPUT);
  pinMode(pinSinistra, OUTPUT);

}

void loop() {
  digitalWrite(pinDestra, HIGH);
  for (int i = 0; i < 255; i++)
  {
    analogWrite(pinVelocita, i);
    delay(10);
  }
  delay(1000);
  for (int i = 255; i >=0; i--)
  {
    analogWrite(pinVelocita, i);
    delay(10);
  }
  delay(1000);
}
