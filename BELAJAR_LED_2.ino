int pinLED = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Alat menyala dan siap digunakan !");
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pinLED, HIGH);
Serial.println("Lampu Nyala");
 delay(100);
 digitalWrite(pinLED, LOW);
 Serial.println("Lampu Mati");
 delay(100);

}
