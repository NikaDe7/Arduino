#include "GyverButton.h"
GButton butt1(12);

int value = 0;


void setup() {
  // put your setup code here, to run once:
  butt1.setDebounce(50); 
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  butt1.tick();
  if (butt1.isClick()) Serial.println("Click"); 
  if (butt1.isDouble()) Serial.println("Double");
}
