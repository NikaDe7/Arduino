int seg1=2;
int seg2=3;
int seg4=4;
int seg5=5;
int seg6=6;
int seg7=7;
int seg9=8;
int seg10=9;

const int Time=1000;

void setup ()
{
pinMode (seg1, OUTPUT);
pinMode (seg2, OUTPUT);
pinMode (seg4, OUTPUT);
pinMode (seg5, OUTPUT);
pinMode (seg6, OUTPUT);
pinMode (seg7, OUTPUT);
pinMode (seg9, OUTPUT);
pinMode (seg10, OUTPUT);
}
void loop ()
{
digitalWrite(seg1, HIGH);
digitalWrite(seg2, HIGH);
digitalWrite(seg4, HIGH);
digitalWrite(seg5, HIGH);
digitalWrite(seg6, HIGH);
digitalWrite(seg7, HIGH);
digitalWrite(seg9, HIGH);
digitalWrite(seg10, HIGH);

delay(Time);

digitalWrite(seg1, LOW);
digitalWrite(seg2, LOW);
digitalWrite(seg4, LOW);
digitalWrite(seg5, LOW);
digitalWrite(seg6, LOW);
digitalWrite(seg7, LOW);
digitalWrite(seg9, LOW);
digitalWrite(seg10, LOW);

delay(Time);
}
