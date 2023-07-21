int rled=8;
int yled=7;
int bled=6;
int redled=3;
int yeled=2;
int bluled=1;

void setup() {
  // put your setup code here, to run once:
  pinMode(rled,OUTPUT);
  pinMode(yled,OUTPUT); 
  pinMode(bled,OUTPUT); 
  pinMode(redled,OUTPUT); 
  pinMode(yeled,OUTPUT); 
  pinMode(bluled,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rled,HIGH);
  digitalWrite(bluled,HIGH);
  delay(20000);
  digitalWrite(rled,LOW);
  digitalWrite(bluled,LOW);
  delay(200);
  digitalWrite(yled,HIGH);
  digitalWrite(yeled,HIGH);
  delay(10000);
  digitalWrite(yled,LOW);
  digitalWrite(yeled,LOW);
  delay(200);
  digitalWrite(bled,HIGH);
  digitalWrite(redled,HIGH);
  delay(20000);
  digitalWrite(bled,LOW);
  digitalWrite(redled,LOW);
  delay(200);
  digitalWrite(yled,HIGH);
  digitalWrite(yeled,HIGH);
  delay(10000);
  digitalWrite(yled,LOW);
  digitalWrite(yeled,LOW);
  delay(200);
  
}
