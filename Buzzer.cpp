/*If this code is asked then replace the led with buzzer or add new connection below the led*/

int ir=2;
int led=7;
int buz=10;
void setup() {
pinMode(ir,INPUT);
pinMode(led,OUTPUT);
pinMode(buz,OUTPUT);
}
void loop() {
if( digitalRead(ir)==LOW)
{
digitalWrite(led,HIGH);
digitalWrite(buz,HIGH);
}
else
{
digitalWrite(led,LOW);
digitalWrite(buz,LOW);
}
}
