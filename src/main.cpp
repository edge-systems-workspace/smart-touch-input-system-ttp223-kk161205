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

void setup() {

}

void loop() {

}