
boolean butt_flag = 0;
boolean butt;
boolean led_flag =  0;


void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
butt = !digitalRead(12);
  if (butt == 1 && butt_flag == 0){
    butt_flag = 1;
    Serial.println("press");
    led_flag = !led_flag;
    digitalWrite(13, led_flag);
  }
  if (butt == 0 && butt_flag == 1){
    butt_flag = 0;
    Serial.println("releas");
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      Serial.println("high start");
      delay(1000);                       // wait for a second
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      Serial.println("low start");
      delay(1000);  
      //if(butt == 1){ break; Serial.println("break start");}
    
}
}
