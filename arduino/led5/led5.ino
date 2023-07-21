int rled=8;
int yled=12;
int bled=11;
int redled=10;
int yeled=9;

const int Time=250;

void setup() {
  pinMode(rled,OUTPUT);
  pinMode(yled,OUTPUT); 
  pinMode(bled,OUTPUT); 
  pinMode(redled,OUTPUT); 
  pinMode(yeled,OUTPUT); 
}

void loop() {
  digitalWrite(rled,HIGH);
  delay(Time);
  digitalWrite(yled,HIGH);
  delay(Time);
  digitalWrite(bled,HIGH);
  delay(Time);
  digitalWrite(redled,HIGH);
  delay(Time);
  digitalWrite(yeled,HIGH);
  delay(Time);
}
