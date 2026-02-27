#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Sneha Singh
 * @date 2026-02-27
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

const int ldrPin = A0;
int ldrValue = 0;

void setup() {

    Serial.begin(9600);
    Serial.println("LDR Brightness Monitoring System Initialized...");
}

void loop() {

    ldrValue = analogRead(ldrPin);
    Serial.print("Raw ADC Value: ");
    Serial.println(ldrValue);

    if (ldrValue < 500) {   // Adjust threshold as needed
        Serial.println("Status: Bright");
    } else {
        Serial.println("Status: Dark");
    }

    // TODO 9:
    // Add delay (500ms or 1 second)
}
