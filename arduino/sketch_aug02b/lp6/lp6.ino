
boolean butt_flag = 0;
boolean butt;
boolean led_flag =  0;

int redPin = 11;
int greenPin = 8;
int bluePin = 9;

int r = 255;
int b = 0;
int g = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(12, INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  butt = !digitalRead(12);
  if (butt == 1 && butt_flag == 0){
    butt_flag = 1;
    for (int e=1;  e<=765; e++) {
      if(e<=255) {r--;  b++;}         // Красный тухнет, синий разгорается       
      if(e>255 && e<=510) {b--;  g++;}// Синий тухнет, зелёный разгорается 
      if(e>510) {g--;  r++;}          // Зелёный тухнет, красный разгорается 
      analogWrite(redPin, r);
      analogWrite(greenPin, g);
      analogWrite(bluePin, b);
      delay(50); // чем больше значение, тем меньше скорость
  }
  }
  if (butt == 0 && butt_flag == 1){
    butt_flag = 0;
  }
}
