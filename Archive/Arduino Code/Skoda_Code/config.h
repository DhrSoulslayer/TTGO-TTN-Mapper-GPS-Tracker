#ifndef LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
#define LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED

// UPDATE WITH YOUR TTN KEYS AND ADDR.
static PROGMEM u1_t NWKSKEY[16] = { 0 }; // LoRaWAN NwkSKey, network session key 
static u1_t PROGMEM APPSKEY[16] = { 0 }; // LoRaWAN AppSKey, application session key 
static const u4_t DEVADDR = 0x000000; // LoRaWAN end-device address (DevAddr)



#endif //LORA_TTNMAPPER_TBEAM_CONFIG_INCLUDED
