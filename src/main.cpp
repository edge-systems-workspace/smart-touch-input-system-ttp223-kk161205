#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author kk161205
 * @date 2026-02-20
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

/* ===========================
   Global Definitions
   =========================== */

/** @brief Digital pin connected to TTP223 OUT */
const uint8_t TOUCH_PIN = 2;

/** @brief Variable to store touch sensor state */
uint8_t touchState = LOW;

/**
 * @brief Arduino setup function
 *
 * Initializes serial communication,
 * configures touch pin, and prints
 * system startup message.
 */
void setup() {

    Serial.begin(9600);

    while (!Serial) {
        ; // Wait for Serial (Uno R4 recommendation)
    }

    pinMode(TOUCH_PIN, INPUT);

    Serial.println("=================================");
    Serial.println(" Embedded Touch Detection System ");
    Serial.println(" TTP223 Sensor Initialized ");
    Serial.println("=================================");
}

/**
 * @brief Arduino main execution loop
 *
 * Reads digital touch state and processes logic.
 */
void loop() {

    touchState = digitalRead(TOUCH_PIN);

    Serial.println("-----------------------------");

    if (touchState == HIGH) {
        Serial.println("Status: TOUCH DETECTED");
    } else {
        Serial.println("Status: NO TOUCH");
    }

    Serial.println("-----------------------------\n");

    /**
     * @brief Sampling delay (300 ms)
     */
    delay(300);
}