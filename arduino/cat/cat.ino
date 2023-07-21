#include "LedControl.h"

// initialize the library
/*
  pin 12 is connected to the DIN
  pin 11 is connected to the CLK
  pin 10 is connected to CS
*/
LedControl lc = LedControl(12, 11, 10, 1);

/* we always wait a bit between updates of the display */
unsigned long delaytime = 1000;
void setup()
{
  lc.shutdown(0, false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0, 8);
  /* and clear the display */
  lc.clearDisplay(0);
}

void loop()
{
  writeText();
}

void writeText() {
  // Символы для фразы Я люблю кота
  byte Ya[8] = {  B00000000, B00111100, B01011110, B10011110, B10011110, B01011110, B00111100,B00000000};
  byte love[8] = { B00000000, B00011111, B00101111, B00101111, B00101111, B00101111, B00011111, B00000000};
  byte K[8] = { B00000000, B00111100, B01100110, B10011001, B10011001, B01100110, B00111100, B00000000};
  byte O[8] = { B00000000, B00110000, B00110000, B11111111, B11111111, B00110000, B00110000, B00000000};
  byte T[8] = { B00000000, B00111100, B01000010, B10011001, B10011001, B01000010, B00111100, B00000000};
  byte A[8] = { B01100110, B10011001, B10011001, B01100110, B01100110, B10011001, B10011001, B01110110};

  
  /* Я */
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, Ya[i]);
  }

  delay(delaytime);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, 0); // this is for blank
  }

  /* love */
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, love[i]);
  }

  delay(delaytime);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, 0); // this is for blank
  }
  
  /* K */
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, K[i]);
  }

  delay(delaytime);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, 0); // this is for blank
  }

  /* O  */
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, O[i]);
  }

  delay(delaytime);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, 0); // this is for blank
  }

  /* T  */
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, T[i]);
  }

  delay(delaytime);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, 0); // this is for blank
  }

  /*  A  */
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, A[i]);
  }

  delay(delaytime);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, 0); // this is for blank
  }

  delay(delaytime);
  for (int i = 0; i < 8; i++) {
    lc.setRow(0, i, 0); // this is for blank
  }
}
