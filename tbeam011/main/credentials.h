/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key MSB
    static const u1_t PROGMEM NWKSKEY[16] = {  0x6B, 0x25, 0x51, 0x65, 0x66, 0xB3, 0x37, 0x60, 0x9C, 0x28, 0xFF, 0x6A, 0x3F, 0x3E, 0x90, 0xF0 };
    // LoRaWAN AppSKey, application session key MSB
    static const u1_t PROGMEM APPSKEY[16] = { 0xF4, 0x40, 0x5B, 0x90, 0xCD, 0x69, 0x46, 0xC4, 0xAA, 0xA7, 0x2C, 0x33, 0x6A, 0x49, 0xF4, 0xFA };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node MSB
    static const u4_t DEVADDR = 0x260B5145;

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