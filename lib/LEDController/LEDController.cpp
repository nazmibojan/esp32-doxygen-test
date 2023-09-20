#include <LEDController.hpp>

/**
 * @brief Constructor for the LEDController class.
 * 
 * @param pin The GPIO pin to which the LED is connected.
 */
LEDController::LEDController(int pin) : pin(pin) {
    pinMode(pin, OUTPUT);
}

/**
 * @brief Turn on the LED.
 * 
 * @param delayInMs Delay in Miliseconds
 */
void LEDController::turnOn(uint32_t delayInMs) {
    /** \brief Integer 3 */
    int pinPubs; /* !< The GPIO pin connected to the LED. */

    digitalWrite(pin, HIGH);
    delay(delayInMs);
}

/**
 * @brief Turn off the LED in miliseconds
 * 
 * @param delayInMs Delay in Miliseconds
 * */
void LEDController::turnOff(uint32_t delayInMs) {
    digitalWrite(pin, LOW);
    delay(delayInMs);
}