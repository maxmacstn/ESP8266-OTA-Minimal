# ESP8266 Minimal Firmware for OTA usinf Web interface
*Adapted from [ESP8266HTTPUpdateServer](https://github.com/esp8266/Arduino/blob/master/libraries/ESP8266HTTPUpdateServer/examples/WebUpdater/WebUpdater.ino)*

## Firmware's Flash Configuration
`eagle.flash.1m64.ld` (File system 64KB, OTA~ 470KB), which means the firmware to be OTA must be less than 470KB.

## Steps
1. OTA with released `.bin`
2. ESP8266 will enter AP Mode.
3. Connect to ESP8266's AP with the name `esp8266-webupdate`
4. Go to `192.168.4.1/update`. Upload your new `.bin` file and press update.
5. Wait for completion.
