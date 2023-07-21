int led=5;
int button=6;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(button,INPUT);}

void loop() {
  // put your main code here, to run repeatedly:
  if (button==HIGH){
  digitalWrite(led,HIGH);
}
  else{
  digitalWrite(led,LOW);
}
}
