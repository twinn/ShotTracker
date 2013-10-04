
/*
  Shot Tracker
 Reads an analog input on pin 2, prints message an time if input value is over 800. 
 
 */
#include <Time.h>

// analog pin 2 has a potentiometer attached to it for now, eventually it will be replaced by a microphone.
int potentiometer = 2;
int val = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the potentiometer's pin an input:
  pinMode(potentiometer, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  val = analogRead(potentiometer);

  if(val >= 800) {
    // print out message and time:
    Serial.println("Possible gunfile");
    Serial.println(now());
  }
  delay(1);        // delay in between reads for stability
}
