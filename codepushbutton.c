#define BUTTON_PIN 2     // Push button connected to digital pin 2
#define LED_PIN 13       // Optional: LED to blink with each count

int counter = 0;
int lastButtonState = 0;

void setup() {
    pinMode(BUTTON_PIN, INPUT_PULLUP);  // Internal pull-up resistor
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);                 // Serial monitor for output
}

void loop() {
    int buttonState = digitalRead(BUTTON_PIN);

    // Detect button press (transition from HIGH to LOW)
    if (buttonState == LOW && lastButtonState == HIGH) {
        delay(50); // Simple debounce
        if (digitalRead(BUTTON_PIN) == LOW) {  // Confirm still pressed
            counter++;
            Serial.print("Counter: ");
            Serial.println(counter);
            digitalWrite(LED_PIN, HIGH);
            delay(100); // LED flash
            digitalWrite(LED_PIN, LOW);
        }
    }

    lastButtonState = buttonState;
}
