#include <Arduino.h>

/**
 * @brief A class for controlling an LED on an ESP32 board.
 * 
 * This class provides basic functions for controlling the LED, such as turning it on and off.
 */
class LEDController {
public:
    LEDController(int pin);

    void turnOn(uint32_t delayInMs);
    void turnOff(uint32_t delayInMs);

    /** \brief Integer 2 */
    int pinPub; /* !< The GPIO pin connected to the LED. */

private:
    /** \brief Integer 2 */
    int pin; /* !< The GPIO pin connected to the LED. */
};
