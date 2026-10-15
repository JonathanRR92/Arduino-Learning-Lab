// Arduino Potentiometer Reader
// Reads analog voltage from a potentiometer connected to A0.

const int POT = A0;

int val = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    val = analogRead(POT);

    Serial.println(val);

    delay(500);
}
