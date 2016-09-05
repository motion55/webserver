
#ifdef __cplusplus
extern "C" {
#endif
#include "httpd.h"

	bool bLED1 = false;

	void DoLED1(void)
	{
		Serial.println(F("LED1"));
		if (bLED1)
		{
			bLED1 = false;
			digitalWrite(LED_BUILTIN, HIGH);
		}
		else
		{
			bLED1 = true;
			digitalWrite(LED_BUILTIN, LOW);
		}
	}

	void DoLED2(void)
	{
		Serial.println(F("LED2"));
	}

	void DoLED3(void)
	{
		Serial.println(F("LED3"));
	}

	void DoLED4(void)
	{
		Serial.println(F("LED4"));
	}

	int ADC_GetConversionValue()
	{
		return analogRead(A0);
	}

#ifdef __cplusplus
}
#endif

#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

char ssid[] = "BST";  //  your network SSID (name)
char pass[] = "";       // your network password

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  WiFi.begin(ssid, pass);
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.println(F("Connecting.."));
    delay(200);
  }
  Serial.println(F("WiFi Connected!"));
  httpd_init();
}

void loop() {
  // put your main code here, to run repeatedly:

}



