#include <Arduino.h>
#include <test.hpp>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  test();
}

void test(){
  int o =0;
}