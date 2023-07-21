int motor=12;

const int Time=250;

void setup() {
  pinMode(motor,OUTPUT);

}

void loop() {
 digitalWrite(motor,HIGH);
 delay(Time);
 
}
