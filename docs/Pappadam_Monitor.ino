#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int SOUND_PIN = A0;
const int BUTTON_PIN = 2;

const int THRESHOLD = 7;

void setup() {
  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  pinMode(BUTTON_PIN, INPUT_PULLUP);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("PAPPADAM TEST");
  lcd.setCursor(0, 1);
  lcd.print("PRESS START");
}

void loop() {

  // Wait for START button
  if (digitalRead(BUTTON_PIN) == LOW) {

    delay(50);   // button debounce

    // Start screen
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("TEST STARTED");
    lcd.setCursor(0, 1);
    lcd.print("MAKE A CRUNCH!");

    delay(1000);

    // Get background sound level
    int baseline = analogRead(SOUND_PIN);

    int maxChange = 0;

    // Listen for 3 seconds
    unsigned long startTime = millis();

    while (millis() - startTime < 3000) {

      int soundValue = analogRead(SOUND_PIN);

      int change = abs(soundValue - baseline);

      if (change > maxChange) {
        maxChange = change;
      }

      Serial.print("Sound Change: ");
      Serial.println(change);

      delay(10);
    }

    // Show result
    lcd.clear();

    if (maxChange >= THRESHOLD) {

      lcd.setCursor(0, 0);
      lcd.print("CRUNCH DETECTED");

      lcd.setCursor(0, 1);
      lcd.print("SCORE: ");
      lcd.print(maxChange);

    } else {

      lcd.setCursor(0, 0);
      lcd.print("NO CRUNCH");

      lcd.setCursor(0, 1);
      lcd.print("SCORE: ");
      lcd.print(maxChange);
    }

    delay(3000);

    // Ready for next test
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("PAPPADAM TEST");
    lcd.setCursor(0, 1);
    lcd.print("PRESS START");

    // Wait for button release
    while (digitalRead(BUTTON_PIN) == LOW) {
      delay(10);
    }
  }
}
