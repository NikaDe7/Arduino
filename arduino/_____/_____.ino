int button = 2;
int led = 5;

void setup()
{
pinMode(button, OUTPUT);
pinMode(led, OUTPUT);
}
void loop(){
int buttonState = digitalRead(button);
  if (buttonState==HIGH){
digitalWrite(led, HIGH);
  }
  if (buttonState==LOW){
digitalWrite(led, LOW);
  }
}
