/* 
Interfacing FC-28 Soil Moisture Sensor with Arduino UNO using is Digital Output pin of Module
by www.playwithcircuit.com 
*/

#include <LiquidCrystal_I2C.h>                    // Library to Run I2C LCD

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define the digital pin for the soil moisture sensor
const int soilMoisturePin = 2;

// Variable to store Output
int sensorOutput = 0;

void setup() {
  // initialize the lcd
  lcd.init();
  // Turn on the Backlight
  lcd.backlight();
  // Clear the display buffer
  lcd.clear();

  // Initialize the digital pin as an input
  pinMode(soilMoisturePin, INPUT);

  // Print a message to the LCD
  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture:");
}

void loop() {
  // Read the value from the soil moisture sensor
  sensorOutput = digitalRead(soilMoisturePin);

  // Display the moisture status on the LCD
  lcd.setCursor(0, 1);
  if (sensorOutput == HIGH) {
    lcd.print("Dry");
  } else {
    lcd.print("Wet");
  }

  // Wait for a bit before the next loop
  delay(1000);
}
