/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key MSB
    static const u1_t PROGMEM NWKSKEY[16] = {  0xBF, 0x38, 0x23, 0xDD, 0xB7, 0x77, 0x50, 0xD8, 0x86, 0x23, 0x09, 0x81, 0x4A, 0xE7, 0xBD, 0x66 };
    // LoRaWAN AppSKey, application session key MSB
    static const u1_t PROGMEM APPSKEY[16] = { 0x1F, 0x95, 0x0A, 0x75, 0xD5, 0x06, 0x08, 0x0B, 0x3B, 0x81, 0x81, 0x0C, 0x30, 0x53, 0xE7, 0x7C };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node MSB
    static const u4_t DEVADDR = 0x260BA085;

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