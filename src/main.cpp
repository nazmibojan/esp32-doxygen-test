#include <Arduino.h>
#include "LEDController.h" // Include the header file for the LEDController class

const int ledPin = 13; // Define the GPIO pin for the LED

LEDController led(ledPin); // Create an instance of the LEDController class

/**
 * @brief Setup function to initialize the ESP32 and LED.
 * 
 * This function is called once when the ESP32 starts.
 */
void setup() {
    // Initialize the Arduino environment
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);

    Serial.println("ESP32 LED Control Example");
}

/**
 * @brief Loop function to control the LED.
 * 
 * This function is called repeatedly in a loop.
 */
void loop() {
    // Turn on the LED for 1 second
    led.turnOn();
    delay(1000);

    // Turn off the LED for 1 second
    led.turnOff();
    delay(1000);
}
