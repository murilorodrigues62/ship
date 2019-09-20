#include <Arduino.h>
#include <Ultrasonic.h>

#define trigger 12
#define echo 13

Ultrasonic ultrasonic(trigger, echo);

void setup() {

  Serial.begin(9600);
}

void loop() {
     
  
  long cm = ultrasonic.Ranging(CM);
  Serial.println(cm);
  delay(100);

  if (cm <= 2)  {
    Serial.println("** HIGH HIGH LEVEL **");       

  }
  else if (cm <= 4)
  {
    Serial.println("** HIGH LEVEL **");       
  }
  
 delay(1000);   
}