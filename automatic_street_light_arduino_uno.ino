int sensorPin = A0;   // Pin AO modul ke A0 Arduino
int ledPin = 9;       // Kaki panjang LED ke Pin 9
int nilaiCahaya = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Biar bisa intip angka di laptop
}

void loop() {
  // put your main code here, to run repeatedly:
  nilaiCahaya = analogRead(sensorPin); 
  Serial.print("Angka Cahaya: ");
  Serial.println(nilaiCahaya);

  // jika nilaiCahaya lebih dari 600 lampu nyala
  if (nilaiCahaya > 600) {
    digitalWrite(ledPin, HIGH); // Lampu NYALA
  } else {
    digitalWrite(ledPin, LOW);  // Lampu MATI
  }
  
  delay(400);
}
