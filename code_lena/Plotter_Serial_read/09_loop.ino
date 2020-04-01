
//characters include spaces in between words

//String title1 = "Deine";        // max of 10 characters           
//String titel2 = "Werbung";    //max of 11 characters        
//String line1 = "koennte hier stehen";                  
//String line2 = "mit woertern und farben";                 
//String line3 = "aber jetzt steht halt nur mist";             
//String line4 = "tuedelue";                              
//String vergl = "Wer nicht neugierig ist erfhrt nichts"; //max of 37 characters




//for every line on the post card the same methods are called upon
//processing() and toMethod() in between the lines are ajusted.
void loop() {
  servoNonDraw();
   
    Serial.println("Type your title with max 10 characters: ");
    while(stringIn == false) processing();
    if(stringIn == true){
      straightUP(34);
       m1ToZero();
      right(5);
      toMethod(0,50);
      stringIn = false;
      }
  
    straightUP(6);
    singleB1(700);
    right(5);

    Serial.println("Type your second title with max 10 characters: ");
    while(stringIn == false) processing();
    if(stringIn == true){
      toMethod(0,50);
      stringIn = false;
      }


    Serial.println("Type your first subtitle with max 11 characters: ");
    while(stringIn == false) processing();
    if(stringIn == true){
      toMethod(0,50);
      stringIn = false;
      }

      straightUP(6);
      singleB1(700);

    Serial.println("Type your second subtitle with max 11 characters: ");
    while(stringIn == false) processing();
    if(stringIn == true){
      toMethod(0,50);
      stringIn = false;
      }
    
    

    Serial.println("Type your first line with max 37 characters: ");
    while(stringIn == false) processing();
    if(stringIn == true){
      toMethod(0,50);
      stringIn = false;
      }


      Serial.println("Type your second line with max 37 characters: ");
    while(stringIn == false) processing();
    if(stringIn == true){
      toMethod(0,50);
      stringIn = false;
      }

      Serial.println("Type your third line with max 37 characters: ");
    while(stringIn == false) processing();
    if(stringIn == true){
      toMethod(0,50);
      stringIn = false;
      }
      
      Serial.println("Type your last line with max 37 characters: ");
    while(stringIn == false) processing();
    if(stringIn == true){
      toMethod(0,50);
      stringIn = false;

      m2ToZero();
      }
    
      
  
}
