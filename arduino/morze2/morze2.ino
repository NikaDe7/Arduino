/*
Simple CW key by UA1CBM
Speed control CW by RN6LLV
*/

const int dashPin = 3; // тире
const int ditPin = 2; // точки
const int ledPin = 12; // the number of the LED pin
const int pot=0; // потенциометр на порт А0
int val;
int cw_delay;

void setup() {
// initialize the LED pin as an output:
pinMode(ledPin, OUTPUT);
// initialize the pushbutton pin as an input:
pinMode(dashPin, INPUT);
pinMode(ditPin, INPUT);
}

void loop(){
val=analogRead(pot); // чтение данных с потенциометра
cw_delay= map(val, 0, 1024, 60, 130);
//cw_delay= (val/7);

if (digitalRead(dashPin) == HIGH) //Тире
{
// turn LED on:
digitalWrite(ledPin, HIGH);
delay(3*cw_delay);
// turn LED off:
digitalWrite(ledPin, LOW);
delay(cw_delay);
}

if (digitalRead(ditPin) == HIGH) //Тире
{
// turn LED on:
digitalWrite(ledPin, HIGH);
delay(cw_delay);
// turn LED off:
digitalWrite(ledPin, LOW);
delay(cw_delay);
}
}
