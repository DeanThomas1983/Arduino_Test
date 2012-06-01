void setup() 
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
  delay(6000);
}

void loop()
{
  clearDisplay();
  zero();
  delay(1000);
  
  clearDisplay();
  one();
  delay(1000);
  
  clearDisplay();
  two();
  delay(1000);
  
  clearDisplay();
  three();
  delay(1000);
  
  clearDisplay();
  four();
  delay(1000);
  
  clearDisplay();
  five();
  delay(1000);
  
  clearDisplay();
  six();
  delay(1000);
  
  clearDisplay();
  seven();
  delay(1000);
  
  clearDisplay();
  eight();
  delay(1000);
  
  clearDisplay();
  nine();
  delay(1000);
  
}

void one()
{
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
}

void two()
{
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
}

void three()
{
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(5,HIGH);  
}

void four()
{
    digitalWrite(2,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(8,HIGH);
}

void five()
{
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(5,HIGH);
}

void six()
{
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(5,HIGH);
}

void seven()
{
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
}

void eight()
{
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(5,HIGH);
}

void nine()
{
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(5,HIGH);
}

void zero()
{
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(5,HIGH);
}

void clearDisplay()
{
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);

   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
}
