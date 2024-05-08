/*Write a program that asks the user for a number and
outputs the number squared that is entered*/
void setup()
{
  Serial.begin(9600);
  Serial.println();
 
}
void loop()
{
  Serial.println("enter no=");
  delay(10000);
  float x = Serial.parseFloat();
  Serial.println(sqrt(x));
  Serial.println(sq(x));
}
