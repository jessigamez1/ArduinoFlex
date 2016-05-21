/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
/*int led = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
*/

int mod = 2;
int mod2 = 12;
int mod3 = 10;
int mod4 = 13;

//int leer;
//int d=50;


int buttonpush = 0;
int buttonstate = 0;
int lastbuttonstate = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
Serial.begin(9600);
pinMode(mod,INPUT);
pinMode(mod2,OUTPUT);
pinMode(mod3,OUTPUT);
pinMode(mod4,OUTPUT);
  /*pinMode(led, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5,OUTPUT);*/
  
  

  
}

// the loop routine runs over and over again forever:
void loop() {
  
  
  buttonstate = digitalRead(mod);
  
  if(buttonstate != lastbuttonstate)
  {
    if(buttonstate == HIGH)
    {
      buttonpush++;
     
      Serial.println(buttonpush);
      
    }
    
  }
  
  lastbuttonstate = buttonstate;
  
  
  
  if(buttonpush % 4 == 0)
  {
    
    digitalWrite(mod2,HIGH);
    
     if (buttonpush % 2 == 0 )
  {
    digitalWrite(mod3, HIGH);
    
    if (buttonpush % 1 == 0 )
  {
    digitalWrite(mod4, HIGH);
  }
  }
   
  }
  else
  {
    digitalWrite(mod2,LOW);
    digitalWrite(mod3,LOW);
    digitalWrite(mod4,LOW);
    
    
  }
  
    
  /*if (buttonpush % 4 == 0 )
  {
    digitalWrite(mod2, HIGH);
  }
  else
  {
    digitalWrite(mod2,LOW);
  }
  
    
  if(buttonpush %6==0)
  {
    digitalWrite(mod4,HIGH);
  }
  else
  {
    digitalWrite(mod4,LOW);
  }
  */
  
  
  
  /*leer=digitalRead(2);
  
  if(leer==HIGH)
  {
    Serial.println("alto");
  }
  
  else 
  {
    Serial.println("low");
  }
  
  //Serial.println(leer);
  
  */
  /*for(int a=led5;a<=led;a++)
  {
  
  digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d);               // wait for a second
  digitalWrite(a,LOW);
  delay(d);
  
  
  }
  
  for(int a=led3;a>1;a--)
  {
    digitalWrite(a,HIGH);
    delay(d);
    digitalWrite(a,LOW);
    delay(d);
    
  }*/
  
  /*digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  //delay(250);   // wait for a second
 
   
    digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);               // wait for a second
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
 // delay(1000);
 
    digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(500);               // wait for a second
   digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  //delay(250);
  
    digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);               // wait for a second
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000);
  
    digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1000);               // wait for a second
  digitalWrite(led5, LOW);    // turn the LED off by making the voltage LOW
  //delay(1000);*/
  
}
