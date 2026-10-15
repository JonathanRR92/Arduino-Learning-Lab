// Automatic Night Light
// Arduino UNO R3

const int WLED = 9;       // White LED connected to PWM pin 9
const int LIGHT = A0;     // Photoresistor connected to analog pin A0

const int MIN_LIGHT = 200;
const int MAX_LIGHT = 800;

int sensorValue = 0;
int brightness = 0;

void setup()
{
    pinMode(WLED, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
    // Read photoresistor
    sensorValue = analogRead(LIGHT);

    // Convert sensor reading to LED brightness
    brightness = map(sensorValue, MIN_LIGHT, MAX_LIGHT, 255, 0);

    // Limit brightness to valid PWM range
    brightness = constrain(brightness, 0, 255);

    // Control LED brightness
    analogWrite(WLED, brightness);

  
    
    Serial.print(brightness);
     Serial.print(" ");
    Serial.println(sensorValue);

    delay(500);
}