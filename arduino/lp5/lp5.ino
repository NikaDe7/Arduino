
boolean butt_flag = 0;
boolean butt;
boolean led_flag =  0;


void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  butt = !digitalRead(12);
  if (butt == 1 && butt_flag == 0){
    butt_flag = 1;
    Serial.println("pressed");
    led_flag = !led_flag;
    digitalWrite(8, led_flag);   
    delay(1000);                       
    digitalWrite(led_flag, LOW);    
    delay(1000); 
  }
  if (butt == 0 && butt_flag == 1){
    butt_flag = 0;
    Serial.println("released");
  }
}
