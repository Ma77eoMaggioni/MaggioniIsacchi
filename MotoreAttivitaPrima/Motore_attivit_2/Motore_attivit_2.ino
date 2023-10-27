int pinVelocita = 5;
int pinDestra = 6;
int pinSinistra = 7;
int pinIn = A0;

void setup() {

  Serial.begin(9600);
  pinMode(pinVelocita, OUTPUT);
  pinMode(pinDestra, OUTPUT);
  pinMode(pinSinistra, OUTPUT);

  randomSeed(analogRead(0));

}

void loop() {
  digitalWrite(pinDestra, HIGH);
  int rnd = random(0,255);
  analogWrite(pinVelocita, rnd);
  delay(1000);
}
