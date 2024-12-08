# ESP32

## Installation in Arduino IDE

### Add ESP32 Board Manager URL

Open Arduino IDE. Go to File > Preferences.
In the "Additional Board Manager URLs" field, add the following URL:

https://dl.espressif.com/dl/package_esp32_index.json

If the field already contains another URL, separate them with a comma.
Click OK to save the settings.

### Install ESP32 Board Package
Navigate to Tools > Board > Boards Manager.
In the search bar, type ESP32.
Locate the "esp32 by Espressif Systems" package.
Click Install.

### Select ESP32 Board
Once installed, go to Tools > Board > ESP32 Arduino and select the specific ESP32 development board you are using (e.g., "ESP32 Dev Module").

## Driver CP210x

Go to the incognito window and download `CP210x Windows Drivers` from 

https://www.silabs.com/developer-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads

Note: You may experience an issue and receive the error message You don't have permission to access "http://www.silabs.com/product? ... In the normal window due to some plugins. Therefore try to download it from an incognito window.

Unzip and install the driver.

Plug the board and check Device manger to identify the respective COM port used by the device.

Update the settings in the Arduino IDE to match the correct port ID.
