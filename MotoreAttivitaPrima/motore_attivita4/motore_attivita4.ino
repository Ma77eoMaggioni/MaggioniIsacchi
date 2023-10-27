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
  char velocitaString[4];

  int i = 0;
  while (Serial.available() > 0)
  {
    velocitaString[i] = Serial.read();
    Serial.println(velocitaString);
    i++;
  }
  velocitaString[3] = '\0';
  Serial.println(velocitaString);
  
  int velocita = atoi(velocitaString);
  //Serial.println(velocita);
  analogWrite(pinVelocita, velocita);
}
