/*Write a program using Arduino to control LED (One or more
ON/OFF). Or Blinking*/
void setup() {
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
}


void loop() {
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
delay(100);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
delay(200);
digitalWrite(6,HIGH);
delay(300);
digitalWrite(6,LOW);
delay(300);
}
