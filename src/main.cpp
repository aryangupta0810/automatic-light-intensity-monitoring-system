#include <Arduino.h>
#define ldrpin A0
void setup() {
    Serial.begin(9600);
    pinMode(ldrpin, INPUT);
    Serial.println("LDRPin setup");

// write your initialization code here
}

void loop() {
    int ldrRaw = analogRead(ldrpin);
    int lightPerecentage = map(ldrRaw, 0, 1023, 0, 100);
    Serial.println("LDRRaw");
    Serial.println(ldrRaw);
    Serial.println(" | light: ");
    Serial.println(lightPerecentage);
    Serial.println("%");
    delay(500);
// write your code here
}
