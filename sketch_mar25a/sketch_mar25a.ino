#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment object
void setup() {
byte numDigits = 4;
byte digitPins[] = {1, 2, 3, 4};
byte segmentPins[] = {17, 16, 15, 14, 13, 12, 11, 10};
sevseg.begin(COMMON_CATHODE, numDigits, digitPins,
segmentPins);
}
void loop(){
sevseg.setNumber(3141); // Displays '3.141’
}
