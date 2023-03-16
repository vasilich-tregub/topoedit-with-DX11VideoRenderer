

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 10:14:07 2038
 */
/* Compiler settings for tedutil.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

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

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ITedVideoWindowHandler,0x72D92BD9,0xCA59,0x4bc7,0x9F,0x40,0x2E,0x60,0x64,0x82,0x60,0x98);


MIDL_DEFINE_GUID(IID, IID_ITedTopoEventHandler,0xC2C3A379,0x3D36,0x4566,0xAC,0x1B,0xA5,0x62,0x46,0x6C,0x02,0x1F);


MIDL_DEFINE_GUID(IID, IID_ITedPropertyInfo,0xC311E957,0xD926,0x4dd8,0xBC,0xDE,0x6F,0x31,0xB4,0xDD,0xB1,0xAD);


MIDL_DEFINE_GUID(IID, IID_ITedPropertyController,0xD3903C3E,0xD5DF,0x43c1,0xA0,0x99,0xAB,0xF7,0x4A,0x53,0x67,0x70);


MIDL_DEFINE_GUID(IID, IID_ITedTopoView,0x4C086376,0x9583,0x4906,0xA0,0x6D,0xAA,0x57,0x04,0x24,0x07,0xDA);


MIDL_DEFINE_GUID(IID, IID_ITedDataSaver,0xAAEB0E96,0x0214,0x42c4,0x80,0xF1,0x3B,0xAD,0x06,0xF5,0x4F,0x58);


MIDL_DEFINE_GUID(IID, IID_ITedDataLoader,0x892FADFF,0x90BB,0x4189,0x99,0x10,0x3F,0xBF,0x58,0xDA,0xA1,0xE8);


MIDL_DEFINE_GUID(IID, LIBID_TedUtil,0x64D3D369,0xB1E9,0x4aff,0xB1,0xA4,0x8D,0x85,0x18,0xE1,0x4A,0x97);


MIDL_DEFINE_GUID(CLSID, CLSID_CTopoViewerController,0x7B0BB325,0xCC66,0x459e,0xB3,0x93,0x5D,0x42,0x93,0x7A,0xAA,0xA2);


MIDL_DEFINE_GUID(CLSID, CLSID_CXMLDataSaver,0xF517B713,0x86B1,0x4bc3,0xBF,0x16,0xF0,0x91,0x19,0xF6,0x72,0x5A);


MIDL_DEFINE_GUID(CLSID, CLSID_CXMLDataLoader,0x01917079,0x8954,0x49a8,0xB9,0xB8,0x33,0x18,0x72,0x8A,0xDA,0x25);


MIDL_DEFINE_GUID(CLSID, CLSID_CTedTestSink,0x3A59CBE9,0xE5D7,0x4769,0x9D,0x3A,0x4E,0xE0,0xF3,0x27,0xA3,0xC3);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



