
int bomba = 8;
int humedad = 0;

void setup() {
  Serial.begin(9600);
pinMode(bomba,OUTPUT);

}

void loop() {
  
humedad = analogRead(A0);

if(humedad>=721 && humedad<=1024){
   digitalWrite(bomba,LOW);
}
else{
   digitalWrite(bomba,HIGH);
}
Serial.println(humedad);
delay(500);
}
