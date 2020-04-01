
//Releasing Steppers so Servo can run without resetting the whole arduino
void servoDraw(){
    myMotor1->release();  //release so they don't need energy
    myMotor2->release();
    
    myServo.write(draw);
    
    myMotor1->setSpeed(11);  // reset so they can be used again   
    myMotor2->setSpeed(11);  
    
  }

void servoNonDraw(){
    myMotor1->release();  //release so they don't need energy
    myMotor2->release();
    
    myServo.write(nonDraw);
    
    myMotor1->setSpeed(11);  // reset so they can be used again   
    myMotor2->setSpeed(11);
  }
