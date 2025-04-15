/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key MSB
    static const u1_t PROGMEM NWKSKEY[16] = {  0x2B, 0xCF, 0x2B, 0xB2, 0x94, 0x0D, 0x09, 0xB4, 0xAB, 0x0A, 0x71, 0xAD, 0x28, 0xD3, 0x42, 0x25 };
    // LoRaWAN AppSKey, application session key MSB
    static const u1_t PROGMEM APPSKEY[16] = { 0x9F, 0x9F, 0x6E, 0xAC, 0xB3, 0xCE, 0x29, 0xD3, 0x12, 0x3D, 0x94, 0x58, 0x35, 0xD6, 0xEC, 0x80 };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node MSB
    static const u4_t DEVADDR = 0x260B90A5;

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