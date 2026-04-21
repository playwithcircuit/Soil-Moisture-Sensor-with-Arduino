/* 
Interfacing FC-28 Soil Moisture Sensor with Arduino UNO using is Analog Output pin of Module
by www.playwithcircuit.com 
*/

#include <LiquidCrystal_I2C.h>                    // Library to Run I2C LCD

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define the analog pin for the soil moisture sensor
const int soilMoisturePin = A0;

// Variables to store sensor values
int sensorValue = 0;
int moisturePercent = 0;

void setup() {
  // initialize the lcd
  lcd.init();
  // Turn on the Backlight
  lcd.backlight();
  // Clear the display buffer
  lcd.clear();
  // Print a message to the LCD
  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture:");
}

void loop() {
  // Read the value from the soil moisture sensor
  sensorValue = analogRead(soilMoisturePin);

  // Convert the sensor value to percentage
  moisturePercent = map(sensorValue, 0, 1020, 100, 0);

  // Display the moisture percentage on the LCD
  lcd.setCursor(0, 1);
  lcd.print(moisturePercent);
  lcd.print(" %  "); // Clear any extra characters

  // Wait for a bit before the next loop
  delay(1000);
}
