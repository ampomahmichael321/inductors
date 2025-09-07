const int emfPin = 32;
void setup(){
  Serial.begin(115200);
}

void loop(){
  int capValue = analogRead(emfPin);
  Serial.print("Back EMF detected Value: ");
  Serial.println(emfValue));
  delay(200);
}