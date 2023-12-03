#include <NewPing.h>
 
#define TRIGGER_PIN  A0
#define ECHO_PIN     A1  
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
Serial.begin(9600);
}
 
void loop() {
  delay(29);                   
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
}
