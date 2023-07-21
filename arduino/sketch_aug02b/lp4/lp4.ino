void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);
  pinMode(A3, INPUT);
  pinMode(13, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  boolean button1 = digitalRead(A3);
  boolean button2 = !digitalRead(12);

  if (button2 == 1) digitalWrite(13, 1);
  else digitalWrite(13, 0);
  
  Serial.print("Button1: ");Serial.print(button1);
  Serial.print(" Button2: ");Serial.println(button2);
}
