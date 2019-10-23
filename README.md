# Octabrix
Just a bunch of cool stuff that can be done using Octabrix

# What is an Octabrix?
Octabrix is a Wi-Fi development board manufactured by IB Hubs based on the famous and low-cost Wi-Fi SoC ESP8266. ESP8266 is a wireless SoC that provide ability to embed Wi-Fi capabilities within other systems, or to function as a standalone application, with the perfect combination of lowest cost and minimal space requirement. Octabrix houses the ESP-12F version of ESP8266.

Octabrix has 10 digital input/output pins (all of which can be used as PWM outputs), a single analog input, a micro USB connection, a reset button, an on-board light sensor, programmable push button and LEDs. One of the interesting features of Octabrix is the user programmable RGB Pixel Ring.

# Powering up the board
Octabrix can be powered directly via the micro USB port or with an external power supply. External power can be either from an AC-to-DC adapter or a battery. Leads from a battery can be connected to the GND and Vin pin headers of the board. However, it is recommended to use the micro USB port. The board can operate on an external power supply of 5 to 12V. If supplied with more than 12V, there are high chances that the on-board voltage regulator gets overheated and the board might get damaged.

# Programming on the board
Octabrix can be programmed with the Arduino IDE. The board comes with a bootloader that allows you to upload new code to it without the use of an external hardware programmer. The octabrix has an on-board programmer, CP2102. This module creates a virtual COM port using USB on your computer which can support various standard baud rates for serial communication. You just need to install the driver using a setup file.
You can find the drivers from https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers.

After this, all you need to get started with the Octabrix is a USB to micro USB cable and the board itself. You need to have an Arduino IDE installed on your computer, along with the ESP board package.
To install the ESP board package, open File>Preferences and add the following URL to the Additional Boards Manager URLs. http://arduino.esp8266.com/stable/package_esp8266com_index.json
Then you need to install the "esp8266 package by ESP8266 Community" package from Tools>Board>Boards Manager. 

Finally, in the Boards menu, select "NodeMCU 1.0(ESP-12E Module)" which has the same pin configuration as Octabrix. That's it, connect the board to your laptop using a USB to micro USB cable. Select the board and the COM port and you are all set to program!
