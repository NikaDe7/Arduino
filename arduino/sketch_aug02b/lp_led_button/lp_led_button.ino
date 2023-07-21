#include "GyverButton.h"
GButton butt1(12);

int value = 0;

int redPin = 11;

const int Time=1000;

void setup() {
  // put your setup code here, to run once:
  butt1.setDebounce(50); 
  Serial.begin(9600);
}

void loop() {
    butt1.tick();
    if (butt1.isClick()) Serial.println("Click");{
      digitalWrite(redPin, HIGH);
      delay(Time);
      digitalWrite(redPin, LOW);
      delay(Time);
  }
}
