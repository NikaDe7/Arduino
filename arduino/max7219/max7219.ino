#include <Adafruit_GFX.h>                    // Подключаем библиотеку Adafruit_GFX
#include <Max72xxPanel.h>                    // Подключаем библиотеку Max72xxPanel
 
int pinCS = 9;                               // Указываем к какому выводу подключен контакт CS
int numberOfHorizontalDisplays = 1;          // Количество матриц по горизонтали
int numberOfVerticalDisplays = 1;            // Количество матриц по-вертикали
 
Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);
 
void setup() {
  matrix.setIntensity(10);                    // Задаем яркость от 0 до 15
  matrix.setRotation(3);                      // Направление текста 1,2,3,4  
}
void loop() 
{
    const byte data[8] = {                    // Создаем массив "Смайл"
    0b10111101,                               //    ####   
    0b01000010,                               //   #    #
    0b10100101,                               //  # #  # #
    0b10000001,                               //  #      #
    0b10100101,                               //  # #  # #
    0b10011001,                               //  #  ##  #
    0b01000010,                               //   #    #
    0b10111101 };                             //    ####
 
matrix.fillScreen(LOW);                       // Обнуление матрицы
   
    for (int y = 0; y < 8; y++ ) {            // Передача массива
        for (int x = 0; x < 8; x++ ) {
           matrix.drawPixel(x, y, data[y] & (1<<x));
        }
    }
    matrix.write();                           // Вывод всех пикселей на матрицу
}
