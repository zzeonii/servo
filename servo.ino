#include <Servo.h>

const int SERVO = 10;
Servo servo;
const int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT);
  // Serial.begin(9600);
  servo.attach(SERVO);
  servo.write(0);
  delay(1000);
}
// for (int cnt = 0; cnt <= 2; cnt++) {
//   servo.write(0);
//   delay(1000);
//   servo.write(90);
//   delay(1000);
// }

// for (int angle = 0; angle <= 180; angle++) {
//   servo.write(angle);
//   delay(30);
// }

// servo.detach();
// }

void loop() {
  int buttonInput = digitalRead(buttonPin);
  if (buttonInput == 1) {
    for (int angle = 0; angle <= 180; angle++) {
      servo.write(angle);
      delay(30);
    }
    // servo.write(150);
  }else servo.write(0);
    // if (Serial.available()) {
    //   char userInput = Serial.read();

    //   switch (userInput) {
    //     case '1':
    //       servo.write(30);
    //       delay(1000);
    //       break;
    //     case '2':
    //       servo.write(90);
    //       delay(1000);
    //       break;
    //     case '3':
    //       servo.write(150);
    //       delay(1000);
    //       break;
    //     default:
    //       break;
    //   }
    // }
  }
  

