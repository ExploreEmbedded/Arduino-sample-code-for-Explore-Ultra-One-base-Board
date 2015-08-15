void setup() {
 /* 4 displays  are selected with S1,S2,S3 and S4

        a
       ----
     |      |
  f  |      | b
     |      |     
       ----- 
     |  g   |
  e  |      | c
     |      |     
       ----
        d    .h*/
 
  #define S1 10
  #define S2 11
  #define S3 12
  #define S4 13

  // Individual segments are selected with a,b,c,d,e,f,g and h

  #define a 2
  #define b 3
  #define c 4
  #define d 5
  #define e 6
  #define f 7
  #define g 8
  #define h 9
  
  pinMode(S1,OUTPUT);
  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  pinMode(S4,OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
  

}


void loop() {

  int displayDigit;
  
digitalWrite(S1,HIGH);  
digitalWrite(S2,HIGH); 
digitalWrite(S3,HIGH); 
digitalWrite(S4,HIGH); 





switch(displayDigit)
{

 case '1':
 {
  digitalWrite(f,LOW);
  digitalWrite(e,LOW);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
  break;
  }

 case '2':
  {
    
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
  }

  case '3':
  {
    
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
  }
    case '4':
  {
    
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
  }

   case '5':
  {
    
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
  }

   case '6':
  {
    
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
  }

   case '7':
  {
    
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
  
  }
   case '8':
  {
    
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
  }

    case '9':
  {
    
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(h,HIGH);
  
  }

    default:
  {
    
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
  
  }
  
}
}

