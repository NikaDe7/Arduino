int buttonPin =  2; 
int tbuttonPin =  3; 
int rledPin =  8;  
int bledPin =  9;  

boolean buttonState = 0;
int tbuttonState = 0;

const int Time=500;
const int tyme=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT_PULLUP);
pinMode(tbuttonPin, INPUT_PULLUP);
pinMode(rledPin, OUTPUT);
pinMode(bledPin, OUTPUT);

}

void loop() {
  buttonState = !digitalRead(buttonPin);
  tbuttonState = !digitalRead(tbuttonPin);
  
  // put your main code here, to run repeatedly:
    if (buttonState == HIGH) digitalWrite(bledPin, HIGH);
    else digitalWrite(bledPin,LOW);
     
    if (tbuttonState == HIGH) digitalWrite(rledPin, HIGH);
    else digitalWrite(rledPin,LOW);
   }
