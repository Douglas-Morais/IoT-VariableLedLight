#include <Arduino.h>

#define LED 6
#define POTENTIOMETER A0
#define STEP_READ_TIME 10

int led_value;
int readPotValue;

void setup()
{
  /* Serial.begin(9600); */
  pinMode(LED, OUTPUT);
  pinMode(POTENTIOMETER, INPUT);
}

void loop()
{
  readPotValue = analogRead(POTENTIOMETER);
  led_value = map(readPotValue, 0, 1023, 0, 255);
  analogWrite(LED, led_value);
  delay(STEP_READ_TIME);
}
