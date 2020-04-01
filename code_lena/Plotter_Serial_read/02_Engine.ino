
//methods for not only moving the steppers but also changing their variables while doing so.
//variable m1 and m2 needed so the stepper knows where it's starting position was.

//Stepper 1 (right)
void microB1(int repeat){
      myMotor1->step(repeat,BACKWARD, MICROSTEP);
      m1= m1 - repeat;
  }

void microF1(int repeat){
      myMotor1->step(repeat,FORWARD, MICROSTEP);
      m1= m1 + repeat;
}

void singleF1(int repeat){
      myMotor1->step(repeat,FORWARD, SINGLE);
      m1= m1 + repeat;
}

void singleB1(int repeat){
      myMotor1->step(repeat,BACKWARD, SINGLE);
      m1= m1 - repeat;
}

void doubleF1(int repeat){
      myMotor1->step(repeat,FORWARD, DOUBLE);
      m1= m1 + repeat;
}

void doubleB1(int repeat){
      myMotor1->step(repeat,BACKWARD, DOUBLE);
      m1= m1 - repeat;
      
}

void m1ToZero(){
  int zahl = m1;
  
  if(m1>0){
    singleB1(zahl);
    Serial.println(m1);
  }
  if(m1<0){
    zahl = zahl * -1;
    singleF1(zahl);
    Serial.println(m1);
    }
}

//Stepper 2 (left)

void microB2(int repeat){
  if(m2 >= 420){
      myMotor2->step(1,BACKWARD, MICROSTEP);
      m2--;
    }
    for(int i=1; i<= repeat; i++){
      if(inRange()){
      myMotor2->step(1,BACKWARD, MICROSTEP);
      m2--;;
  }
 }
}


void microF2(int repeat){
  if(m2 < 0){
      myMotor2->step(1,FORWARD, MICROSTEP);
      m2++;
    }
    for(int i=1; i<= repeat; i++){
      if(inRange()){
      myMotor2->step(1,FORWARD, MICROSTEP);
      m2++;
      }
   }
}


void singleF2(int repeat){
  if(m2 < 0){
      myMotor2->step(1,FORWARD, MICROSTEP);
      m2++;
  }
  for(int i=1; i<= repeat; i++){
    if(inRange()){  
      myMotor2->step(1,FORWARD, SINGLE);
      m2++;
  }
 }
}


void singleB2(int repeat){
  if(m2 >= 420){
      myMotor2->step(1,BACKWARD, MICROSTEP);
      m2--;
    }
    for(int i=1; i<= repeat; i++){
      if(inRange()){
      myMotor2->step(1,BACKWARD, SINGLE);
      m2--;
   }
  }
}

void doubleF2(int repeat){
  if(m2 < 0){
      myMotor2->step(1,FORWARD, MICROSTEP);
      m2++;
    }
    for(int i=1; i<= repeat; i++){
      if(inRange()){
      myMotor2->step(1,FORWARD, DOUBLE);
      m2++;
    }  
  }
}


void doubleB2(int repeat){
  if(m2 >= 420){
      myMotor2->step(1,BACKWARD, MICROSTEP);
      m2--;
    }
    for(int i=1; i<= repeat; i++){
      if(inRange()){
      myMotor2->step(1,BACKWARD, DOUBLE);
      m2--;
   }
   }
}

//moving stepper 2(left) back to starting position
void m2ToZero(){
  int zahl = m2;
    singleB2(zahl);
}



//Check if M2 is in Range
boolean inRange(){
    if(m2 >= 420 || m2 < 0){
        return false;
      } else {
          return true;
        }
  }
