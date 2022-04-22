#define D2 4
void setup() {
   pinMode(A0, INPUT);
   pinMode(D2, OUTPUT);
}

void loop() {
  int sensorValue  = analogRead(A0);
  float outputVolt = map(sensorValue, 9, 1024, 0, 255);
  analogWrite(D2, outputVolt);
  delay(100);
}
