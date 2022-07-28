#include <Servo.h>
Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  myservo.write(0);
  
  pinMode(2, INPUT);
  pinMode(3, INPUT);

  // put your setup code here, to run once:

}

void loop() {
  Serial.println(digitalRead(2));
  if(digitalRead(2) == LOW || digitalRead(3) == LOW ){
    myservo.write(90);
  }
  else if(digitalRead(2) == HIGH && digitalRead(3) == HIGH ){
    myservo.write(0);
  }
  
  // put your main code here, to run repeatedly:

}
