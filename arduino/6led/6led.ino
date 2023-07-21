int rled=13;
int yled=12;
int bled=11;
int redled=10;
int yeled=9;
int bluled=8;

const int Time=250;

void setup() {
  pinMode(rled,OUTPUT);
  pinMode(yled,OUTPUT); 
  pinMode(bled,OUTPUT); 
  pinMode(redled,OUTPUT); 
  pinMode(yeled,OUTPUT); 
  pinMode(bluled,OUTPUT);  

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
  digitalWrite(bluled,HIGH);
  delay(Time);
  digitalWrite(rled,LOW);
  delay(Time);
  digitalWrite(yled,LOW);
  delay(Time);
  digitalWrite(bled,LOW);
  delay(Time);
  digitalWrite(redled,LOW);
  delay(Time);
  digitalWrite(yeled,LOW);
  delay(Time);
  digitalWrite(bluled,LOW);
  delay(Time);

}
