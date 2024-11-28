int sensorPin = A0;
int sensorValue = 0;  

int wet = 200;
int dry = 600;


void setup() {
  Serial.begin(9600); 
}

void loop() {
  
  sensorValue = analogRead(sensorPin);  
 
  float percentage = map(sensorValue, dry, wet, 0, 100);

  if(percentage < 20) {
    Serial.println("Dry\n");

  } else {
    Serial.println("Wet\n");
  }

  Serial.print("Moisture Percentage: ");
  Serial.println(percentage);  
  
  delay(1000);  

}
