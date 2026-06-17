#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  -1
);

#define MQ2_PIN 34
#define BUZZER_PIN 25
#define LED_PIN 26

int gasValue;

void setup() {

  Serial.begin(115200);

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  Wire.begin(21, 22);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED Failed");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);

  display.setCursor(10, 20);
  display.println("GAS");
  display.println("SYSTEM");

  display.display();

  delay(2000);
}

void loop() {

  gasValue = analogRead(MQ2_PIN);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Gas Leak Detector");

  display.setCursor(0, 20);
  display.print("Gas: ");
  display.println(gasValue);

  if (gasValue > 2000) {

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    display.setCursor(0, 50);
    display.println("DANGER!");
  }
  else {

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    display.setCursor(0, 50);
    display.println("SAFE");
  }

  display.display();

  delay(500);
}