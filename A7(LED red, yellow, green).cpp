int red=8;
int yellow=9;
int green=10;


void setup() {
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
Serial.begin(9600);
Serial.println();
}
void loop() {
  Serial.println("enter letter\n r for red\n g for green\n y for yellow\n");
while(Serial.available() >=0)
{
char x=Serial.read();
if(x=='r')
{
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
}
if(x=='y')
{
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(1000);
  digitalWrite(green,LOW);
  break;
}
if(x=='g')
{
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
  break;
}
}
}

