int enA = 10; 
int in1 = 9; 
int in2 = 8;
int pot = A0;


void setup()
{

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT);
  pinMode(pot, INPUT);  

}

void loop()
{
  int potValue = analogRead(pot);
  int motorSpeed = map(potValue, 0, 1023, 0, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, motorSpeed);

}
