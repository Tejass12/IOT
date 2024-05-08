/*Understanding the connectivity of Raspberry-Pi / Arduino
with IR sensor. Write an application to detect obstacle and
notify user using LEDs*/

int ir = 13;
int PinLed = 8;
int val=0;
void setup()
{
pinMode(ir, INPUT);
pinMode(PinLed, OUTPUT);
}
void loop()
{
if(digitalRead(ir) == LOW)
{
 
digitalWrite(PinLed, HIGH);
}
else
{
digitalWrite(PinLed, LOW);
}


