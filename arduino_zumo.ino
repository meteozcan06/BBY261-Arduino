#include <Wire.h>
#include <ZumoShield.h>

#define LED_PIN 13
#define button 8 

ZumoMotors motors;
int buton = 8;
int butonDurumu = 0;
void setup(){
  pinMode(buton, INPUT); 
  }
void loop() {
  butonDurumu = digitalRead(buton);
  if (butonDurumu = HIGH){
  for(int speed = 0; speed <= 500; speed++)
  {
    motors.setRightSpeed(speed);
    motors.setLeftSpeed(speed);
  delay(500);
  }
  digitalWrite(LED_PIN, HIGH);
  for(int speed = 0; speed <= 500; speed++)
  {
    motors.setRightSpeed(speed);
  delay(9);
  }
  for(int speed = 500; speed >= 0; speed--)
  {
    motors.setLeftSpeed(speed);
  delay(9);
  }
  digitalWrite(LED_PIN, LOW);

  for (int speed = 0; speed >= -500; speed--)
  {
    motors.setRightSpeed(speed);
    delay(9);
  }

  for (int speed = -500; speed <= 0; speed++)
  {
    motors.setRightSpeed(speed);
    delay(2);
  }

  delay(500);
  }
  }
