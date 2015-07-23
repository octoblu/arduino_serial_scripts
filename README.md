# arduino_serial_scripts


For each script the following libraries and wiring required are shown below. 

These should be used with the Octoblu Gateblu "Serial" Plugin. Configure the Serial plugin to listen on the port your arduino shows up as (i.e. "COM4") and with the baudrate ( all of these are 9600 baud ).


##LED_Marquee 

If you send it a string over serial it will scroll text.

Pinout:
5v -> 5v

Gnd -> Gnd

D0 -> 6

Baud -> 57600

###Download Libraries
https://github.com/adafruit/Adafruit_NeoMatrix/archive/master.zip

https://github.com/adafruit/Adafruit-GFX-Library/archive/master.zip

https://github.com/adafruit/Adafruit_NeoPixel/archive/master.zip

#LED_Voting_Bar 

If you send it a number it will show it on the LED strip. Changes color as the values hit higher thresholds.

Pinout:
5v -> 5v

Gnd -> Gnd

D0 -> 6

Baud -> 9600

###Download Libraries
https://github.com/adafruit/Adafruit_NeoPixel/archive/master.zip

#NFC_Reader

This will send a string with the NFC card UID.

###Download Libraries
https://github.com/miguelbalboa/rfid/archive/master.zip

