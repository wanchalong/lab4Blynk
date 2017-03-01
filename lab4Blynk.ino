#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "a5c954e5efd64b30977828d2dbc7c013";

void setup()
{



 Serial.println("WiFi Connected");
 Serial.println("IP Address : ");
 Serial.println(WiFi.localIP());
  Serial.begin(115200);
  Blynk.begin(auth, "Apple TV", "APPLE_TV");

}

void loop()
{
  Blynk.run();
}
