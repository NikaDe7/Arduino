boolean statuslamp; // состояние лампы: true - включено, false - выключено
boolean statulamp; 
boolean statlamp; 

void setup() {
   pinMode(12,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode(10,OUTPUT);// пин 12 со светодиодом будет выходом (англ. «output»)
   pinMode(A0,INPUT_PULLUP); // к аналоговому входу A0 подключим датчик (англ. «intput»)
   statuslamp=false;
   statulamp=false;
   statlamp=false;
   // начальное состояние - лампа выключена
   Serial.begin(9600); // подключаем монитор порта
}

void loop() {
   Serial.println (analogRead(A0)); // выводим значение датчика на монитор
  
   if(analogRead(A0)>80) {
      statuslamp=!statuslamp; // меняем статус лампы при регистрации хлопка
      digitalWrite(12,statuslamp); // переключаем светодиод на выходе 12 
      //біле
      delay(20); // задержка, "дребезга" хлопков
   }
   if(analogRead(A0)>90) {
      statulamp=!statulamp; // меняем статус лампы при регистрации хлопка
      //delay(100);
      digitalWrite(11,statulamp);
      //жовте
      delay(20); // задержка, "дребезга" хлопков
   }
   if(analogRead(A0)>100) {
      statlamp=!statlamp; // меняем статус лампы при регистрации хлопка
      digitalWrite(10,statlamp);
      //зелене
      delay(20); // задержка, "дребезга" хлопков
}
   if(analogRead(A0)>110) {
      statlamp=!statlamp; // меняем статус лампы при регистрации хлопка
      digitalWrite(9,statlamp);
      //червоне
      delay(20); // задержка, "дребезга" хлопков
}
   if(analogRead(A0)>120) {
      statlamp=!statlamp; // меняем статус лампы при регистрации хлопка
      //голубе
      digitalWrite(8,statlamp); // переключаем светодиод на выходе 12
      delay(20); // задержка, "дребезга" хлопков
}
}
