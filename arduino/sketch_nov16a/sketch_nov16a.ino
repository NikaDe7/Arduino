#include <LiquidCrystal_I2C.h>   //including the libraries of I2C-LCD1602 liquid crystal 
#include <Wire.h>                //including the libraries of I2C
unsigned char Bluetooth_val;       //defining variable val
LiquidCrystal_I2C lcd(0x27,16,2);  //defining liquid crystal
//#define Lpwm_pin  5     //adjusting speed  
//#define Rpwm_pin  10    //adjusting speed  //
int pinLB=4;     // defining pin2 left rear
int pinLF=5;     // defining pin4 left front
int pinRB=7;    // defining pin7 right rear
int pinRF=6;    // defining pin8 right front
unsigned char Lpwm_val = 255;
unsigned char Rpwm_val = 255;
int Car_state=0;

boolean butt_flag = 0;
boolean butt;
boolean led_flag =  0;


void M_Control_IO_config(void)
{
  pinMode(pinLB,OUTPUT); // pin 2
  pinMode(pinLF,OUTPUT); // pin 4
  pinMode(pinRB,OUTPUT); // pin 7 
  pinMode(pinRF,OUTPUT); // pin 8
  pinMode(12, INPUT_PULLUP);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}

void advance()     //  going forward
    {
     digitalWrite(pinRB,LOW);  // making motor move towards right rear
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,LOW);  // making motor move towards left rear
     digitalWrite(pinLF,HIGH); 
     Car_state = 1; 
     show_state();   
    }
void turnR()        //turning right(dual wheel)
    {
     digitalWrite(pinRB,LOW);  //making motor move towards right rear
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,HIGH);
     digitalWrite(pinLF,LOW);  //making motor move towards left front
     Car_state = 4;
     show_state();
    }
void turnL()        //turning left(dual wheel)
    {
     digitalWrite(pinRB,HIGH);
     digitalWrite(pinRF,LOW );   //making motor move towards right front
     digitalWrite(pinLB,LOW);   //making motor move towards left rear
     digitalWrite(pinLF,HIGH);
     Car_state = 3;
     show_state();
    }    
void stopp()         //stop
    {
     digitalWrite(pinRB,HIGH);
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,HIGH);
     digitalWrite(pinLF,HIGH);
     Car_state = 5;
     show_state();
    }
void back()          //back up
    {
     digitalWrite(pinRB,HIGH);  //making motor move towards right rear
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,HIGH);  //making motor move towards left rear
     digitalWrite(pinLF,LOW);
     Car_state = 2;
     show_state() ;    
    }
void show_state(void)
{
  lcd.setCursor(0, 1);
   switch(Car_state)
   {
     case 1:lcd.print(" Go  ");
     break;
     case 2:lcd.print("Back ");
     break;
     case 3:lcd.print("Left ");
     break;
     case 4:lcd.print("Right");
     break;
     case 5:lcd.print("stop ");
     break;
     default:
     break;
   }
}              
void LCD1602_init(void)            //including initialized function of liquid crystal
{
  lcd.init();  //invoking initialized function of LCD in LiquidCrystal_I2C.h  
  delay(10);   //delaying for 10 millisecond
  lcd.backlight(); //open backlight of LCD1602
  lcd.clear();     //clear screen
}    
void setup() 
{ 
   LCD1602_init();
   M_Control_IO_config();
   
   Serial.begin(9600);   //initialized serial port , using Bluetooth as serial port, setting baud at 9600 
   lcd.setCursor(0, 0);  //setting cursor in the first row and column
   lcd.print("   Wait  Sigal");
   stopp(); 
}
void loop() 
{  
   lcd.setCursor(0, 0);  //setting cursor in the first row and column
   lcd.print("BluetoothControl");
 
   if(Serial.available()) //to judge whether the serial port receives the data.
    {
     Bluetooth_val=Serial.read();  //reading (Bluetooth) data of serial port,giving the value of val;
    switch(Bluetooth_val)
     {
       case 'R':advance(); //UP
       break;
       case 'L': back();   //back
       break;
       case 'F':turnL();   //Left
       break;
       case 'B':turnR();  //Right
       break;
       case 'S':stopp();    //stop
       break;   
     }
    } 
    butt = !digitalRead(12);
    if (butt == 1 && butt_flag == 0){
      butt_flag = 1;
      digitalWrite(pinRB,LOW);
      digitalWrite(pinRF,LOW );
      digitalWrite(pinLB,LOW);
      digitalWrite(pinLF,LOW); 
      led_flag = !led_flag;
  }
    if (butt == 0 && butt_flag == 1){
      butt_flag = 0;
  }
  digitalWrite(3, HIGH);
}
