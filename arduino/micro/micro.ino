#define STRIP_PIN 2     // пин ленты
#define NUMLEDS 100      // кол-во светодиодов
#include <microLED.h>   // подключаем библу

microLED <NUMLEDS, STRIP_PIN, LED_WS2818, ORDER_GRB, CLI_AVER> strip;

void setup() {
  strip.setBrightness(60);  // яркость
}
void loop() {
  rainbow();      // бегущая радуга во всю ленту
  delay(30);      // 30 кадров в секунду
}
void rainbow() {
  static byte counter = 0;
  for (int i = 0; i < NUMLEDS; i++) {
    strip.set(i, mWheel8(counter + i * 255 / NUMLEDS));   // counter смещает цвет
  }
  counter += 3;   // counter имеет тип byte и при достижении 255 сбросится в 0
}
