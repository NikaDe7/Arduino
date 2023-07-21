char massiv []="01";

const int sensorPin =7;
const int ledPin = 13;
int sensorState=0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorState = digitalRead(sensorPin);
  if (sensorState == HIGH)
{
    digitalWrite(ledPin, HIGH);
    digitalWrite(LED_BUILTIN,LOW);
    Serial.println(massiv[0]);
    delay(1000);
}
  else {digitalWrite(ledPin, LOW);
    digitalWrite(LED_BUILTIN,HIGH);
    Serial.println(massiv[1]);
    delay(1000);
}}
