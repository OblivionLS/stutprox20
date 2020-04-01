#include <Servo.h>

/* 
This is a test sketch for the Adafruit assembled Motor Shield for Arduino v2
It won't work with v1.x motor shields! Only for the v2's with built in PWM
control

For use with the Adafruit Motor Shield v2 
---->	http://www.adafruit.com/products/1438
*/


#include <Wire.h>
#include <Adafruit_MotorShield.h>

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
// Or, create it with a different I2C address (say for stacking)
// Adafruit_MotorShield AFMS = Adafruit_MotorShield(0x61); 

// Connect a stepper motor with 200 steps per revolution (1.8 degree)
// to motor port #2 (M3 and M4)
Adafruit_StepperMotor *myMotor1 = AFMS.getStepper(200, 1);
Adafruit_StepperMotor *myMotor2 = AFMS.getStepper(200, 2);

const int buttonPin = 2;     // the number of the pushbutton pin

Servo myServo;
//Variablen Initialisieren
int m1 = 0; //zähler für motor position
int m2 = 0;
int z = 0;
int buttonState = 0;
int val = 0;
int nonDraw = 40;
int draw = 120;
boolean stringIn = false;

//Text zum drucken definieren
char buf[50];

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Stepper test!");

  AFMS.begin();    // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz
  
  myMotor1->setSpeed(11);  //setting rpm for steppers 
  myMotor2->setSpeed(11); 

  pinMode(buttonPin, INPUT);

myMotor1->release();
myMotor2->release();


  //Servo
  myServo.attach(10);

  myServo.write(nonDraw);

  
}



  
