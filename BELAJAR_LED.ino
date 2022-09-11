int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
 pinMode(pinLED, OUTPUT);
 
}

void loop() {
  digitalWrite(pinLED, HIGH);
 delay(50);
 digitalWrite(pinLED, LOW);
 delay(50);
 digitalWrite(pinLED, HIGH);
 delay(50);
 digitalWrite(pinLED, LOW);
 delay(500);
 digitalWrite(pinLED, HIGH);
 delay(50);
 digitalWrite(pinLED, LOW);
 delay(50);
 digitalWrite(pinLED, HIGH);
 delay(50);
  // put your main code here, to run repeatedly:

}
