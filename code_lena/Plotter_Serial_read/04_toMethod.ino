
//Calling the right method for the different chars in the array.
void toMethod(int start, int ende){
  boolean complete = false;
  for(int i=start;i<ende; i++){
    if(m1>=1394 || m1<=-1394){
       straightDOWN(6);
       m1ToZero();
      }
    if(isSpace(buf[i])){
      space();
      complete = true;
      } else if(buf[i] == 'a'){
        a();
        complete = true;
      } else if(buf[i] == 'b'){
        b();
        complete = true;
      } else if(buf[i] == 'c'){
        c();
        complete = true;
      } else if(buf[i] == 'd'){
        d();
        complete = true;
      } else if(buf[i] == 'e'){
        e();
        complete = true;
      } else if(buf[i] == 'f'){
        f();
        complete = true;
      } else if(buf[i] == 'g'){
        g();
        complete = true;
      } else if(buf[i] == 'h'){
        h();
        complete = true;
      } else if(buf[i] == 'i'){
        letterI();
        complete = true;
      } else if(buf[i] == 'j'){
        j();
        complete = true;
      } else if(buf[i] == 'k'){
        k();
        complete = true;
      } else if(buf[i] == 'l'){
        l();
        complete = true;
      } else if(buf[i] == 'm'){
        m();
        complete = true;
      } else if(buf[i] == 'n'){
        n();
        complete = true;
      } else if(buf[i] == 'o'){
        o();
        complete = true;
      } else if(buf[i] == 'p'){
        p();
        complete = true;
      } else if(buf[i] == 'q'){
        q();
        complete = true;
      } else if(buf[i] == 'r'){
        r();
        complete = true;
      } else if(buf[i] == 's'){
        s();
        complete = true;
      } else if(buf[i] == 't'){
        t();
        complete = true;
      } else if(buf[i] == 'u'){
        u();
        complete = true;
      } else if(buf[i] == 'v'){
        v();
        complete = true;
      } else if(buf[i] == 'w'){
        w();
        complete = true;
      } else if(buf[i] == 'x'){
        x();
        complete = true;
      } else if(buf[i] == 'y'){
        y();
        complete = true;
      } else if(buf[i] == 'z'){
        letterZ();
        complete = true;
      } 
      
      if(complete){
          buf[i] = (char)0;
       }
    }
    straightDOWN(6);
    m1ToZero();
  }
