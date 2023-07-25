int sound = 0;

void setup() {
pinMode(2, INPUT); //Setzt genannten Pin auf INPUT
pinMode(4, INPUT); //Setzt gennanten Pin auf INPUT
pinMode(6, INPUT); //Setzt gennanten Pin auf INPUT
pinMode(8, INPUT); //Setzt genannten Pin auf INPUT
pinMode(10, INPUT); // Setzt genannten Pin auf INPUT
pinMode(12, INPUT); //Setzt genannten Pin auf INPUT

pinMode(3, OUTPUT); //Setzt genannten Pin auf OUTPUT
pinMode(5, OUTPUT); //Setzt genannten Pin auf OUTPUT
pinMode(7, OUTPUT); //Setzt genannten Pin auf OUTPUT
pinMode(9, OUTPUT); //Setzt genannten Pin auf OUTPUT
pinMode(11, OUTPUT); //Setzt genannten Pin auf OUTPUT
pinMode(13, OUTPUT); //Setzt geannten Pin auf OUTPUT
}


void loop() {
    
  if(digitalRead(2) == HIGH){
    sound = 1;
  }
  if(digitalRead(4) == HIGH){
    sound = 2;
  }  
  if(digitalRead(6) == HIGH){
    sound = 3;
  }
  if(digitalRead(8) == HIGH){
    sound = 4;
  }
  if(digitalRead(10) == HIGH){
    sound = 5;
  }
  if(digitalRead(12) == HIGH){
    sound = 6;
  }
  }
  if(sound == 1)
  {
    digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay();//In die Klammer die Zeit vom Sound              
    sound = 0; 
  }
  else if(sound == 2)
  {
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay();      
    sound = 0;
  }
  else if (sound == 3)
  {
   digitalWrite(7, HIGH);
   delay(1000);
   digitalWrite(7, LOW);
   delay();
   sound == 0;
   }
  else if (sound == 4)
  {
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    delay();
    sound == 0;
  }
  else if (sound = 5)
  {
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
    delay();
    sound == 0;
  }
  else if (sound = 6)x
  {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay();
    sound = 0 ;
  }
  else {
    sound = 0;
  }
}
