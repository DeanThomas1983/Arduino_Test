const int LONG_PAUSE = 5000;
const int SHORT_PAUSE = 1000;

void setup() 
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  delay(1000);
}

void loop()
{
  red();
  delay(LONG_PAUSE);
  redAmber();
  delay(SHORT_PAUSE);
  green();
  delay(LONG_PAUSE);
  amber();
  delay(SHORT_PAUSE);
}

void red()
{
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(3,LOW); 
}

void redAmber()
{
   digitalWrite(5,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(3,LOW); 
}

void green()
{
   digitalWrite(5,LOW);
   digitalWrite(4,LOW);
   digitalWrite(3,HIGH); 
}

void amber()
{
   digitalWrite(5,LOW);
   digitalWrite(4,HIGH);
   digitalWrite(3,LOW); 
}
