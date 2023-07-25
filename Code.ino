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
int taste1 = 0;

void loop() {

  taste1 = digitalRead(2);
  
  if(taste1 == HIGH){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}
