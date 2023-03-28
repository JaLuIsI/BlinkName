// -----Blink an LED---- //

const pin_t led1 = D7;// led 1 = D7 set 
int PushButton = D4;
int ButtonState= 0;


void setup()  //setup - runs once at the beginning of your program
{
  pinMode(led1 ,OUTPUT);
  pinMode(PushButton, INPUT_PULLUP);


}



void loop()  // loop for blinking "JAYAMINI" in argon particle
{
    ButtonState = digitalRead( PushButton );
    if (ButtonState==LOW){
   
    //Morse code for "J"
    
    digitalWrite(led1, HIGH);	   
    delay(500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1500);
    digitalWrite(led1, LOW);
    delay(1000); 
    digitalWrite(led1, HIGH);
    delay(1500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1500);
    digitalWrite(led1, LOW);
    delay(1000);
    

    //Morse code for "A"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    //Morse code for "Y"
    
    digitalWrite(led1, HIGH);
    delay(1500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    
    //Morse code for "A"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    //Morse code for "M"
    

    digitalWrite(led1, HIGH);	   
    delay(1500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    //Morse code for "I"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(500);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    //Morse code for "N"
    
    digitalWrite(led1, HIGH);
    delay(1500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(500);				
    digitalWrite(led1, LOW);	  
    delay(1000);


    //Morse code for "I"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(500);				
    digitalWrite(led1, LOW);	  
    delay(1000);  
    
   


    
    
    //END
    }
    else{
    // otherwise
    // turn the LED Off
    digitalWrite( led1, LOW);
   
    }
}


