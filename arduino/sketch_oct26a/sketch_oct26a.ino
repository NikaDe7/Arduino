#include "GyverButton.h"
GButton butt1(12);

int value = 0;

int led=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  butt1.tick();
  if (butt1.isClick()) Serial.println("Click"); {
    digitalWrite(led, HIGH);
  }
   if (butt1.isDouble()) Serial.println("Double");{
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
   }
}
