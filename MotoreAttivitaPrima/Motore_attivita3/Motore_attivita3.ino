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
  int velocita = map(analogRead(pinIn), 0, 1024, 0, 255);
  Serial.println(velocita);
  analogWrite(pinVelocita, velocita);
}
