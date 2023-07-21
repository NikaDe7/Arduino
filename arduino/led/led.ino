int rled = 8;
int gled=11;
//int bled=12;

const int delayTime=250;

void setup()

{

pinMode(rled, OUTPUT);
pinMode(gled, OUTPUT);
//pinMode(bled, OUTPUT);
}

void loop()

{

digitalWrite(rled, HIGH);
delay(delayTime);
digitalWrite(gled, HIGH);
delay(delayTime);
//digitalWrite(bled, HIGH);
//delay(delayTime);
digitalWrite(rled, LOW);
delay(delayTime);
digitalWrite(gled, LOW);
delay(delayTime);
//digitalWrite(bled, LOW);
//delay(delayTime);
}
