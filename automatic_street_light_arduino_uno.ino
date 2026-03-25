int sensorPin = A0;   // AO module pin to Arduino A0
int ledPin = 9;       // Long leg of LED to Pin 9
int lightValue = 0;   

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Start serial communication to monitor values on PC
}

void loop() {
  lightValue = analogRead(sensorPin); 
  Serial.print("Light Level: ");
  Serial.println(lightValue);

  // If lightValue is greater than 600, turn the LED on
  if (lightValue > 600) {
    digitalWrite(ledPin, HIGH); // Turn LED ON
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED OFF
  }
  
  delay(400);
}