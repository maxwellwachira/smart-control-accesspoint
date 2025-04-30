// LED.h
#ifndef LED_H
#define LED_H

#include <Arduino.h>
#include <AsyncJson.h>
#include <AsyncTCP.h>
#include <ArduinoJson.h>
#include <map>
#include <functional>

// Pin definitions
#define LED_PIN 2  // Built-in LED on most ESP32 boards

// Digital pins (adjust as needed for your board)
#define D1_PIN 1
#define D2_PIN 4
#define D3_PIN 12
#define D4_PIN 13
#define D5_PIN 14
#define D6_PIN 15
#define D7_PIN 16
#define D8_PIN 35
#define D9_PIN 36

// Laser pins 
#define LASER_12V_PIN 26
#define LASER_5V_PIN 21

// Fan pin
#define FAN_PIN 37

// PWM properties
#define PWM_FREQUENCY 5000
#define PWM_RESOLUTION 8  // 8-bit resolution, 0-255

// Function declarations
void setupLED();
void updateLED();
void setupPinControlHandlers();
void loadAllPinSettings();
void updateDigitalPin(const String &pinId, bool state, int brightness);
void updateLaserPin(const String &pinId, bool state, int brightness);
void updateFanPin(const String &pinId, bool state, int brightness);

#endif
