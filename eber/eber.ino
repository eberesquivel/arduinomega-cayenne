#define CAYENNE_PRINT Serial  // Comment this out to disable prints and save space
#include <CayenneMQTTEthernet.h>

// Cayenne authentication info. This should be obtained from the Cayenne Dashboard.
char username[] = "ffa35370-2daf-11e7-9191-35e0db0bb6a6";
char password[] = "ec73d95f6d12ca5f0a0b2e015e6cb50e24094ae5";
char clientID[] = "91ad6120-59e2-11e8-9b75-e32a21a125ca";

// pin 32,33,34,35,36,37,38,39,40,41,42,44,46,48,50,52,53,15 no sirven



#define VIRTUAL_CHANNELSALA1 30
#define VIRTUAL_CHANNELSALA2 31
#define VIRTUAL_CHANNELSALA3 29
#define VIRTUAL_CHANNELSALA4 28
#define VIRTUAL_CHANNELCMDR1 27
#define VIRTUAL_CHANNELCMDR2 26
#define VIRTUAL_CHANNELCMDR3 25
#define VIRTUAL_CHANNELCMDR4 24
#define VIRTUAL_CHANNELCOCI1 23
#define VIRTUAL_CHANNELCOCI2 22
#define VIRTUAL_CHANNELRCMRA 21
#define VIRTUAL_CHANNELBRCMR 20
#define VIRTUAL_CHANNELBANO1 19
#define VIRTUAL_CHANNELSTAR1 18
#define VIRTUAL_CHANNELSTAR2 17
#define VIRTUAL_CHANNELLVDRO 16
#define VIRTUAL_CHANNELPRKNG 15
#define VIRTUAL_CHANNELLOBY1 14
#define VIRTUAL_CHANNELLOBY2 2
#define VIRTUAL_CHANNELPRTN1 3
#define VIRTUAL_CHANNELPRTN2 4

#define SALA1 30 // Do not use digital pins 0 or 1 since those conflict with the use of Serial.
#define SALA2 31
#define SALA3 29
#define SALA4 28
#define CMDR1 27
#define CMDR2 26
#define CMDR3 25
#define CMDR4 24
#define COCI1 23
#define COCI2 22
#define RCMRA 21
#define BRCMR 20
#define BANO1 19
#define STAR1 18
#define STAR2 17
#define LVDRO 16
#define PRKNG 15
#define LOBY1 14
#define LOBY2 2
#define PRTN1 3
#define PRTN2 4

void setup()
{
  Serial.begin(9600);
  pinMode(SALA1, OUTPUT);
  pinMode(SALA2, OUTPUT);
  pinMode(SALA3, OUTPUT);
  pinMode(SALA4, OUTPUT);
  pinMode(CMDR1, OUTPUT);
  pinMode(CMDR2, OUTPUT);  
  pinMode(CMDR3, OUTPUT);
  pinMode(CMDR4, OUTPUT);
  pinMode(COCI1, OUTPUT);
  pinMode(COCI2, OUTPUT);
  pinMode(RCMRA, OUTPUT);
  pinMode(BRCMR, OUTPUT);
  pinMode(BANO1, OUTPUT);
  pinMode(STAR1, OUTPUT);
  pinMode(STAR2, OUTPUT);
  pinMode(LVDRO, OUTPUT);
  pinMode(PRKNG, OUTPUT);  
  pinMode(LOBY1, OUTPUT);  
  pinMode(LOBY2, OUTPUT); 
  pinMode(PRTN1, OUTPUT);
  pinMode(PRTN2, OUTPUT);
  Cayenne.begin(username, password, clientID);
}

void loop()
{
  Cayenne.loop();
}

CAYENNE_IN(VIRTUAL_CHANNELBANO1)
{
  int valbano = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELBANO1, BANO1, valbano);
  // Write the value received to the digital pin.
  digitalWrite(BANO1, valbano);
  
 }


// This function is called when data is sent from Cayenne.
CAYENNE_IN(VIRTUAL_CHANNELSALA1)
{
  int valsala1 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELSALA1, SALA1, valsala1);
  // Write the value received to the digital pin.
  digitalWrite(SALA1, valsala1);
  
 }

CAYENNE_IN(VIRTUAL_CHANNELSALA2)
{
int valsala2 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELSALA2, SALA2, valsala2);
  // Write the value received to the digital pin.
  digitalWrite(SALA2, valsala2);
}

CAYENNE_IN(VIRTUAL_CHANNELSALA3)
{
int valsala3 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELSALA3, SALA3, valsala3);
  // Write the value received to the digital pin.
  digitalWrite(SALA3, valsala3);
}

CAYENNE_IN(VIRTUAL_CHANNELSALA4)
{
int valsala4 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELSALA4, SALA4, valsala4);
  // Write the value received to the digital pin.
  digitalWrite(SALA4, valsala4);
}

CAYENNE_IN(VIRTUAL_CHANNELCMDR1)
{
int valcmdr1 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELCMDR1, CMDR1, valcmdr1);
  // Write the value received to the digital pin.
  digitalWrite(CMDR1, valcmdr1);
}

CAYENNE_IN(VIRTUAL_CHANNELCMDR2)
{
int valcmdr2 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELCMDR2, CMDR2, valcmdr2);
  // Write the value received to the digital pin.
  digitalWrite(CMDR2, valcmdr2);
}

CAYENNE_IN(VIRTUAL_CHANNELCMDR3)
{
int valcmdr3 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELCMDR3, CMDR3, valcmdr3);
  // Write the value received to the digital pin.
  digitalWrite(CMDR3, valcmdr3);
}

CAYENNE_IN(VIRTUAL_CHANNELCMDR4)
{
int valcmdr4 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELCMDR4, CMDR4, valcmdr4);
  // Write the value received to the digital pin.
  digitalWrite(CMDR4, valcmdr4);
}

CAYENNE_IN(VIRTUAL_CHANNELCOCI1)
{
int valcoci1 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELCOCI1, COCI1, valcoci1);
  // Write the value received to the digital pin.
  digitalWrite(COCI1, valcoci1);
}

CAYENNE_IN(VIRTUAL_CHANNELCOCI2)
{
int valcoci2 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELCOCI2, COCI2, valcoci2);
  // Write the value received to the digital pin.
  digitalWrite(COCI2, valcoci2);
}


CAYENNE_IN(VIRTUAL_CHANNELRCMRA)
{
int valrcmra = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELRCMRA, RCMRA, valrcmra);
  // Write the value received to the digital pin.
  digitalWrite(RCMRA, valrcmra);
}

CAYENNE_IN(VIRTUAL_CHANNELBRCMR)
{
int valbrcmr = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELBRCMR, BRCMR, valbrcmr);
  // Write the value received to the digital pin.
  digitalWrite(BRCMR, valbrcmr);
}

CAYENNE_IN(VIRTUAL_CHANNELSTAR1)
{
int valstar1 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELSTAR1, STAR1, valstar1);
  // Write the value received to the digital pin.
  digitalWrite(STAR1, valstar1);
}

CAYENNE_IN(VIRTUAL_CHANNELSTAR2)
{
int valstar2 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELSTAR2, STAR2, valstar2);
  // Write the value received to the digital pin.
  digitalWrite(STAR2, valstar2);
}


CAYENNE_IN(VIRTUAL_CHANNELLVDRO)
{
int vallvdro = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELLVDRO, LVDRO, vallvdro);
  // Write the value received to the digital pin.
  digitalWrite(LVDRO, vallvdro);
}

CAYENNE_IN(VIRTUAL_CHANNELPRKNG)
{
int valprkng = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELPRKNG, PRKNG, valprkng);
  // Write the value received to the digital pin.
  digitalWrite(PRKNG, valprkng);
}

CAYENNE_IN(VIRTUAL_CHANNELLOBY1)
{
int valloby1 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELLOBY1, LOBY1, valloby1);
  // Write the value received to the digital pin.
  digitalWrite(LOBY1, valloby1);
}

CAYENNE_IN(VIRTUAL_CHANNELLOBY2)
{
int valloby2 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELLOBY2, LOBY2, valloby2);
  // Write the value received to the digital pin.
  digitalWrite(LOBY2, valloby2);
}

CAYENNE_IN(VIRTUAL_CHANNELPRTN1)
{
int valprtn1 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELPRTN1, PRTN1, valprtn1);
  // Write the value received to the digital pin.
  digitalWrite(PRTN1, valprtn1);
}

CAYENNE_IN(VIRTUAL_CHANNELPRTN2)
{
int valprtn2 = getValue.asInt();
  CAYENNE_LOG("Channel %d, pin %d, value %d", VIRTUAL_CHANNELPRTN2, PRTN2, valprtn2);
  // Write the value received to the digital pin.
  digitalWrite(PRTN2, valprtn2);
}

