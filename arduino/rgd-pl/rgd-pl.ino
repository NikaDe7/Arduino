int red =9;
int green=10;
int blue=11;

const int Time=500;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
}

void show(int r, int g, int b)
{
  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);
}
void loop() {
  // put your main code here, to run repeatedly:
  show(0,255,255); delay(Time);
  show(0,0,0); delay(Time);
  show(255,255,0); delay(Time);
  show(0,0,0); delay(Time);
  show(255,0,255); delay(Time);
  show(0,0,0); delay(Time);
  show(255,255,255); delay(Time);
  show(0,0,0); delay(Time);
}
