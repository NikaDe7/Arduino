unsigned char Bluetooth_val;       //defining variable val

int ena = 3;
int in1 = 4;
int in2 = 5;
int in3 = 7;
int in4 = 6;


void M_Control_IO_config(void)
{
  pinMode(in1,OUTPUT); // pin 2
  pinMode(in2,OUTPUT); // pin 4
  pinMode(in3,OUTPUT); // pin 7 
  pinMode(in4,OUTPUT); // pin 8
}
void advance()     //  going forward
{
  analogWrite( ena, 255 );
  digitalWrite( in1, HIGH );
  digitalWrite( in2, LOW );
  digitalWrite( in3, HIGH );
  digitalWrite( in4, LOW );
  
}
void back()          //back up
    {
    analogWrite( ena, 255);
    digitalWrite( in1, LOW );
    digitalWrite( in2, HIGH );
    digitalWrite( in3, LOW );
    digitalWrite( in4, HIGH );
    
    }
void setup() {
  // put your setup code here, to run once:
    M_Control_IO_config();
}

void loop() {
   if(Serial.available()) //to judge whether the serial port receives the data.
    {
     Bluetooth_val=Serial.read();  //reading (Bluetooth) data of serial port,giving the value of val;
    switch(Bluetooth_val)
     {
       case 'F':advance(); //UP
       break;
       case 'B': back();   //back
       break;
       //case 'L':turnL();   //Left
      // break;
      // case 'R':turnR();  //Right
       //break;
       //case 'S':stopp();    //stop
       //break;   
     }
    } 
}
