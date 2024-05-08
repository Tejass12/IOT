/*Write a program so it displays the temperature in Fahrenheit
as well as the maximum and minimum temperatures it has
seen*/

float temp;
int tempin=0;
float min,max;
void setup() {
   Serial.begin(9600);
   
  min=100;
  max=0;
}


void loop() {
  temp=analogRead(tempin);
  temp=temp*0.48828125;
 
  if(temp>max)
  {
    max=temp;
  }
  if(temp<min)
  {
    min=temp;
  }
  Serial.print("Temperature=");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
  Serial.print("maximum temperature=");
  Serial.print(max);
  Serial.print("*C");
  Serial.println();
  Serial.print("minimum temperature=");
  Serial.print(min);
  Serial.print("*C");
  Serial.println();
  delay(6000);


}



