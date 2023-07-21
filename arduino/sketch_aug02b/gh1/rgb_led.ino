int redPin = 11;
int greenPin = 8;
int bluePin = 9;

int r = 255;
int b = 0;
int g = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  for (int e=1;  e<=765; e++) {
    if(e<=255) {r--;  b++;}         // Красный тухнет, синий разгорается       
    if(e>255 && e<=510) {b--;  g++;}// Синий тухнет, зелёный разгорается 
    if(e>510) {g--;  r++;}          // Зелёный тухнет, красный разгорается 
    
    analogWrite(redPin, r);
    analogWrite(greenPin, g);
    analogWrite(bluePin, b);
    
    delay(5); // чем больше значение, тем меньше скорость
  }
}
