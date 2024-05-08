/*Write a program read the temperature sensor &amp; send the
values to the serial monitor on the computer*/

/*Write a program to show the temperature and shows a
graph of the recent measurements*/
float temp;
int tempPin = 0;


void setup() {
   Serial.begin(9600);
}


void loop() {
   temp = analogRead(tempPin);
   // read analog volt from sensor and save to variable temp
   temp = temp * 0.48828125;
   // convert the analog volt to its temperature equivalent
   Serial.print("TEMPERATURE = ");
   Serial.print(temp); // display temperature value
   Serial.print("*C");
   Serial.println();
   delay(3000); // update sensor reading each one second
}
