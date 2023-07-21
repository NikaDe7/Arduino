#include "GyverButton.h"
GButton butt1(12);

int value = 0;

int redPin = 11;
int greenPin = 8;
int bluePin = 9;

const int delayTime=500;
const int Time=1000;
const int tyme=50;

void setup() {
  // put your setup code here, to run once:
  butt1.setDebounce(50); 
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  butt1.tick();
  if (butt1.isClick(digitalWrite(greenPin, HIGH) delay(delayTime);
     digitalWrite(greenPin, LOW);
     delay(delayTime);))Serial.println("Click");{
  }
  if (butt1.isDouble()) Serial.println("Double");{
    digitalWrite(redPin, HIGH);
    delay(Time);
    digitalWrite(redPin, LOW);
    delay(Time);
  }
  if (butt1.isTriple()) Serial.println("Triple");{
    digitalWrite(bluePin, HIGH);
    delay(tyme);
    digitalWrite(bluePin, LOW);
    delay(tyme);
  } 
  if (butt1.isRelease()) Serial.println("Release");{
    digitalWrite(bluePin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
  }
}
  
