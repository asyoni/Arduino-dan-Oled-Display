#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET -1
Adafruit_SH1106 display(OLED_RESET);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
 
}

void loop() {
 
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(WHITE);
display.setCursor(1,20);
display.print("Hello World!");
display.display();
  
}
