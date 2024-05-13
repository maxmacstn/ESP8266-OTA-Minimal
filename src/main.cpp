
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPUpdateServer.h>

#define STASSID "esp8266-webupdate"
#define builtin_led 2

//ESP IP Address: 192.168.4.1

ESP8266WebServer httpServer(80);
ESP8266HTTPUpdateServer httpUpdater;

void setup(void) {
  pinMode(builtin_led, OUTPUT);
  digitalWrite(builtin_led, HIGH);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(STASSID);

  httpUpdater.setup(&httpServer);
  httpServer.begin();

}

void loop(void) {
  httpServer.handleClient();
  digitalWrite(builtin_led, millis() /1000 %2 == 0);
}