/*
  Author: Kamala Harris, 29/8/24

  Learning Intention:
  The students will learn what 'pulse width modulation' is and how to use it to write
  analogue data on a digital PIN.
  
  Success Criteria:
    1.  I understand what pulse width modulation is
    2.  I can identify the PWM PINS on the Arduino Uno
    3.  I can wire an RGB LED for PWM control in TINKERCAD
    5.  I can write PWM data to multiple pins and manually change the colour of the LED

  Student Notes: 

  Documentation: 
    https://www.w3schools.com/colors/colors_rgb.aspt
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/07.pulseWidthModulation/Pulse-Width-Modulation.jpg
  Schematic:
    https://www.tinkercad.com/things/drNDsMxGMIY?sharecode=D6x4_xTTRl_zGs7B-XGqfbQhG_xgjj3TVS_c-GNTK-c
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/07.pulseWidthModulation/Bootcamp-PWMOutput.png
*/

static unsigned int ledPinRED = 8;
static unsigned int ledPinBLUE = 9;
static unsigned int ledPinGREEN =10;


void setup()
 {
  Serial.begin(9600);
  Serial.print("Serial Monitor Debug");
  pinMode(ledPinRED, OUTPUT);
  pinMode(ledPinBLUE, OUTPUT);
  pinMode(ledPinGREEN, OUTPUT);
}

void loop() 
{
  analogWrite(ledPinRED,255);
  analogWrite(ledPinBLUE,255);
  analogWrite(ledPinGREEN,255);
}










/*
static unsigned int ledPin = 3;


void setup()
 {
  Serial.begin(9600);
  Serial.print("Serial Monitor Debug");
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  int val = analogRead(A3);
  analogWrite(ledPin, val/4);
}
*/