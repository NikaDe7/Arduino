int blue=12;

const int Time=1000;

void setup() {
  pinMode(blue,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blue,HIGH);
  delay(Time);

}
