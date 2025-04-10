#define BLYNK_TEMPLATE_ID "TMPL6C0ZGuyaB"
#define BLYNK_TEMPLATE_NAME "smart house"
#define BLYNK_AUTH_TOKEN "ffiZbPs9_gxdrzt2pLE4mdA4TufSsZyc"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "ffiZbPs9_gxdrzt2pLE4mdA4TufSsZyc";
char ssid[] = "Heounin";
char pass[] = "boychienthan123";

int led1= 14; // cắm vào chân D5 nhé 
int led= 12 ; // cắm vào chân D6 nhé 
int nutled1;
int nutled;
void setup()
{
 pinMode(led,OUTPUT);
 pinMode(led1,OUTPUT);
  Serial.begin(9600);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}
BLYNK_WRITE(V1)
{
  nutled = param.asInt();
  if (led == 1)
  {
    digitalWrite(led,1);
  }
  else{
    digitalWrite(led,0); 
     }
}
BLYNK_WRITE(V2)
{
  nutled1 = param.asInt();
  if (led1==1)
  {
    digitalWrite(led1,1);
  }
  else
  {
  digitalWrite(led1,0); 
  }
}

void loop()

{
  if(button == 0)
  {
    int giatrinutled = digitalRead(led);
    if(giatrinutled == 0)
    {
      digitalWrite(led,1);
    }
    else{
      digitalWrite(led,0;
        }
  }
  else 
  {
    digitalWrite(led,1);
  }

  if(button == 0)
  {
    int giatrinutled1 = digitalRead(led1);
    if(giatrinutled1 == 0)
    {
      digitalWrite(led1,1);
    }
    else{
      digitalWrite(led1,0;
        }
  }
  else 
  {
    digitalWrite(led1,1);
  }
  Blynk.run();
}

