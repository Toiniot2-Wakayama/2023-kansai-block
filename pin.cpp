// Arduino Include
#include <Arduino.h>

// Header Include
#include "pin.h"

// Constant
const unsigned short int linePin[22] = {26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
const unsigned short int ballPin[16] = {A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15};
const unsigned short int motorPin[4][3] = {{16, 17, 2}, {18, 19, 3}, {22, 23, 4}, {24, 25, 5}};
const unsigned short int ledPin[3] = {13, 14, 15};
const unsigned short int btnPin[4] = {7, 8, 9, 10};
const unsigned short int bzPin = 6;

// Function
// PinMode Setup
void pinSetup(void) {
  for(int i=0; i<22; i++){
    pinMode(linePin[i], INPUT);
  }
  for(int i=0; i<16; i++){
    pinMode(ballPin[i], INPUT);
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      pinMode(motorPin[i][j], OUTPUT);
    }
  }
  for(int i=0; i<3; i++){
    pinMode(ledPin[i], OUTPUT);
  }
  for(int i=0; i<4; i++){
    pinMode(btnPin[i], INPUT);
  }
  pinMode(bzPin, OUTPUT);

  Serial.begin(9600);
  return;
}