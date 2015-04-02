#include <Adafruit_NeoPixel.h>

#define N_PIXELS  150  // Number of pixels in strand

#define LED_PIN    6  // NeoPixel LED strand is connected to this pin




Adafruit_NeoPixel
  strip = Adafruit_NeoPixel(N_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);



void setup() {

  // This is only needed on 5V Arduinos (Uno, Leonardo, etc.).
  // Connect 3.3V to mic AND TO AREF ON ARDUINO and enable this
  // line.  Audio samples are 'cleaner' at 3.3V.
  // COMMENT OUT THIS LINE FOR 3.3V ARDUINOS (FLORA, ETC.):
Serial.begin(9600);

  
  strip.begin();
   for(int i=0; i<N_PIXELS; i++) {
    
             strip.setPixelColor(i,   0,   0, 0);
             strip.show();             
   
  }
  
  
}

 int      n;
 
 
void loop() {
 


if(Serial.available() > 0){
  int x = Serial.parseInt(); 
  if(x > 0){ n = x;

   for(int i=0; i<N_PIXELS; i++) {
    
             strip.setPixelColor(i,   0,   0, 0);
             strip.show();             
   
  }
  
  for(int i=0; i< n; i++) {
   if(i <= 30){
        strip.setPixelColor(i,   100,   100, 100);
     }else if( i >= 30 && i <= 59){              
         strip.setPixelColor(i,   0,   100, 100);
        }else if(i >= 60 && i <= 79){               
            strip.setPixelColor(i,   0,   255, 0);
          }else if(i >= 80){                          
            strip.setPixelColor(i,   255,   0, 0);
          }
              
             strip.show(); 
   
  }


}  
   Serial.println(n);
}
          



  // Color pixels based on rainbow gradient
  
 




}

// Input a value 0 to 255 to get a color value.
// The colors are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  if(WheelPos < 85) {
   return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if(WheelPos < 170) {
   WheelPos -= 85;
   return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
   WheelPos -= 170;
   return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}
