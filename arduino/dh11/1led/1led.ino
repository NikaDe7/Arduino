int rled=11;
int gled=10;
int bled=9;

const int Time=250;

void setup() {
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(bled,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
 digitalWrite(rled,HIGH);
 delay(Time);
 digitalWrite(rled,LOW);
 delay(Time);
 digitalWrite(gled,HIGH);
 delay(Time);
 digitalWrite(gled,LOW);
 delay(Time);
 digitalWrite(bled,HIGH);
 delay(Time);
 digitalWrite(bled,LOW);
 delay(Time);// put your main code here, to run repeatedly:

}
