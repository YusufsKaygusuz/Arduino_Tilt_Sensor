int egim;

void setup(){
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop(){
 egim = analogRead(A0);
 Serial.print("Egim Oranı= ");
 Serial.println(egim);
 if (egim > 256){ //Dikili olduğunda 1023
  digitalWrite(7, LOW);  
 }
 else {
  digitalWrite(7,HIGH);
 }
 delay(25);
}
