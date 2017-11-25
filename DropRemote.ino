const int FotoresiPin = A0;   // Fotoresi
const int PotiPin = A1;       // Poti
const int led1Pin = 12;       // Output(LED)
const int led2Pin = 13;       // DauerLED
const int threshold = 250;    // Auslösegrenze

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int Fotoresi = analogRead(FotoresiPin);
  int Poti = analogRead(PotiPin);
  int PotiGut = Poti / 5;
  
    digitalWrite(led2Pin, HIGH);

  if (Fotoresi < threshold) {
    delay(PotiGut);
    digitalWrite(led1Pin, HIGH);
    delay(100);
    digitalWrite(led1Pin, LOW);
  } else {
    digitalWrite(led1Pin, LOW);
  }

  Serial.println(Fotoresi);
  //Serial.println(Poti);
  //Serial.println(PotiGut);
  //delay(1);
}
