#include <dht.h> 
dht DHT; 
float temp; 
void setup() { 
  // put your setup code here, to run once: 
  Serial.begin(9600); 
delay(1000); 
Serial.println("Temp and hum sensor"); 
delay(1000); 
} 
 
void loop() { 
  // put your main code here, to run repeatedly: 
  DHT.read11(A1); 
temp=analogRead(A0); 
Serial.println("Tempearture:"); 
Serial.print(temp); 
Serial.println("C");  
Serial.print("Current Temp:"); 
Serial.print(DHT.temperature); 
Serial.println("C"); 
Serial.print("Current Hum:"); 
Serial.println(DHT.humidity); 
Serial.println("Pulse Rate:"); 
delay(1000); 
Serial.println(analogRead(A2)); 
} 
