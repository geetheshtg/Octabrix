#include <Adafruit_NeoPixel.h>
#define PIN            12
#define NUMPIXELS      10
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN);

int delayval = 500; // delay for half a second

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  Serial.begin(115200);
}

void loop() {
  Serial.print("Enter what colour you want");
  char a=Serial.read();
  switch(a)
  {
    
    case 'r':
     for(int i=0;i<NUMPIXELS;i=i+2)
     {
         pixels.setPixelColor(i, pixels.Color(150,0,0)); // Moderately bright green color.
        pixels.show();
        delay(500);
          pixels.setPixelColor(i+1, pixels.Color(102,150,150)); // Moderately bright green color.
         pixels.show(); // This sends the updated pixel color to the hardware.
         delay(delayval); // Delay for a period of time (in milliseconds).
     }
 break;
    case 'y':
     for(int i=0;i<NUMPIXELS;i++){
         pixels.setPixelColor(i, pixels.Color(255,0,0)); // Moderately bright green color.
         pixels.show(); // This sends the updated pixel color to the hardware.
         delay(delayval); // Delay for a period of time (in milliseconds).
    }
      break;

    case 'b':
     for(int i=0;i<NUMPIXELS;i++){
         pixels.setPixelColor(i, pixels.Color(255,0,255)); // Moderately bright green color.
         pixels.show(); // This sends the updated pixel color to the hardware.
         delay(delayval); // Delay for a period of time (in milliseconds).

     }
      break;
   }
}
