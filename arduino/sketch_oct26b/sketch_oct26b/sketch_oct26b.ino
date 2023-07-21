

void setup()
 {

 pinMode(12, INPUT_PULLUP);
 pinMode(A3, OUTPUT);
 pinMode(11, INPUT_PULLUP);
 }

 void loop()
{
 if(digitalRead(12)==LOW)//если кнопка нажата ...
 {
  tone(A3, 440);
  delay(200);
  noTone(A3);
  delay(200);
  }
 else
 {
 noTone(A3);
 }
 if(digitalRead(11)==LOW)//если кнопка нажата ...
 {
  tone(A3, 440);
  delay(450);
  noTone(A3);
  delay(150);
 }
 else
 {
 noTone(A3);
 }
 }
 
