/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key MSB
    static const u1_t PROGMEM NWKSKEY[16] = {  0x44, 0x08, 0xBA, 0x10, 0x2B, 0xA0, 0x6A, 0x7F, 0xFB, 0xC8, 0x7E, 0x8E, 0x55, 0xBB, 0x59, 0x0B };
    // LoRaWAN AppSKey, application session key MSB
    static const u1_t PROGMEM APPSKEY[16] = { 0x5E, 0x0D, 0xAD, 0xBB, 0x84, 0xAE, 0xAF, 0x52, 0xF9, 0xAD, 0xDD, 0xF3, 0x08, 0x8C, 0xFB, 0x94 };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node MSB
    static const u4_t DEVADDR = 0x260B1C68;

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