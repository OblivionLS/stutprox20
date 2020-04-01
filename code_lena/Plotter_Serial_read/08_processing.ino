
//checks if String is available from the Serial Monitor
//if there is a String available it is convertet to the char array "buf"
void processing(){
    if(Serial.available()){
      String a = Serial.readString();

      a.toLowerCase();
      a.toCharArray(buf, 50);
      
      stringIn = true;
      } 
  }
