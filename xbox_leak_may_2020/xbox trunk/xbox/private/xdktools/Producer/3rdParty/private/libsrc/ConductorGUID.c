#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IDMUSProdMidiInCPt = {0xAA349DE0,0xEF0E,0x11d0,{0xAD,0x22,0x00,0xA0,0xC9,0x2E,0x1C,0xAC}};


const IID IID_IDMUSProdConductorTempo = {0x32F40A16,0x5F8F,0x41a0,{0xB6,0xBE,0x51,0x25,0x7D,0x1F,0xE6,0x88}};


const IID IID_IDMUSProdPortNotify = {0x9BD50920,0x3C3C,0x11d2,{0x8A,0xA2,0x00,0xC0,0x4F,0xBF,0x8D,0x15}};


const IID IID_IDMUSProdTransport = {0x8C7B3A62,0xD33D,0x11d2,{0xB0,0xF0,0x00,0x10,0x5A,0x26,0x62,0x0B}};


const IID IID_IDMUSProdSecondaryTransport = {0x52D006FA,0x2281,0x11d2,{0x88,0xF7,0x00,0xC0,0x4F,0xBF,0x8D,0x15}};


const IID IID_IDMUSProdNotifyCPt = {0xFA273400,0x9F23,0x11d1,{0x88,0x77,0x00,0xC0,0x4F,0xBF,0x8D,0x15}};


const IID IID_IDMUSProdConductor = {0x0E8A27A9,0x473E,0x4f48,{0x82,0x21,0x57,0x5B,0xE7,0x05,0x95,0x65}};


const CLSID CLSID_CConductor = {0x36F6DDE8,0x46CE,0x11D0,{0xB9,0xDB,0x00,0xAA,0x00,0xC0,0x81,0x46}};


#ifdef __cplusplus
}
#endif
