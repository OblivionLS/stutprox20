
//declaration of block size for making the letters
int block = 10;

//methods for making the letters
//makes an angle in said direction for letters with a curve
void upLeft(){
  //up left
    for(int i=1;i<=block/2-1;i++){
      microF2(2);
      microF1(3);
      }
  }
void upRight(){
  //up right
    for(int i=1;i<=block-block/5;i++){
      microF2(1);
      microB1(1);
      }
  }  
void downRight(){
  //down right
    for(int i=1;i<=block/2-1;i++){
      microB2(2);
      microB1(3);
      }
  }
void downLeft(){
  //down left
    for(int i=1;i<=block-block/5;i++){
      microB2(1);
      microF1(1);
      }
  }  
  

//Straight line in said direktion
void straightUP(int repeat){
  for(int i = 1; i<=repeat*block/5;i++){
        microF1(1);
        microF2(4);
      }
  }
  
void straightDOWN(int repeat){
  for(int i = 1; i<=repeat*block/5;i++){
        microB1(1);
        microB2(4);
      }
  }  


//goes in said direction but in a curve
void up(int repeat){  //microsteps
    microF2(repeat*block);
  }
void down(int repeat){
    microB2(repeat*block);
  } 
void left(int repeat){
    microF1(repeat*block);
  }
void right(int repeat){
    microB1(repeat*block);
  }  

 
