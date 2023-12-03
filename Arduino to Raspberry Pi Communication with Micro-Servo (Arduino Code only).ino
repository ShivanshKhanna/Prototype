#include <Servo.h>
Servo myservo;

void setup() {
  
  // This baud rate must match the one set up for Pi
  Serial.begin(9600);
  myservo.attach(3);
  myservo.write(80);
}
void loop() {
  
  // If there is a serial message available
  if (Serial.available() > 0) {
    
    // Read it into our string
    String data = Serial.readStringUntil('\n');
    Serial.print("sent data");
    Serial.println(data);
    // If the data is our keyword
    if(data == "Down"){
      myservo.write(170);
    }else if (data == "Up"){
      myservo.write(80);
    }
  }
}
