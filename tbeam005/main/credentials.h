/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key MSB
    static const u1_t PROGMEM NWKSKEY[16] = {  0xF0, 0x6B, 0xA8, 0x73, 0xB0, 0xF4, 0xEA, 0x70, 0xB4, 0xDC, 0xE6, 0x22, 0x33, 0xDE, 0x82, 0xCA };
    // LoRaWAN AppSKey, application session key MSB
    static const u1_t PROGMEM APPSKEY[16] = { 0x83, 0x0D, 0x69, 0x46, 0x48, 0x73, 0xF1, 0x53, 0x64, 0x47, 0x24, 0x73, 0xBB, 0x9D, 0x47, 0x9B };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node MSB
    static const u4_t DEVADDR = 0x260BCBAE;

#endif

#ifdef USE_OTAA

    // This EUI must be in little-endian format, so least-significant-byte (lsb)
    // first. When copying an EUI from ttnctl output, this means to reverse
    // the bytes. For TTN issued EUIs the last bytes should be 0x00, 0x00,
    // 0x00.
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This should also be in little endian format (lsb), see above.
    // Note: You do not need to set this field, if unset it will be generated automatically based on the device macaddr
    static u1_t DEVEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This key should be in big endian format (msb) (or, since it is not really a
    // number but a block of memory, endianness does not really apply). In
    // practice, a key taken from ttnctl can be copied as-is.
    // The key shown here is the semtech default key.
    static const u1_t PROGMEM APPKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

#endif