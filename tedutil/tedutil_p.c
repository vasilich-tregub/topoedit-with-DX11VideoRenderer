

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "tedutil.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _tedutil_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } tedutil_MIDL_TYPE_FORMAT_STRING;

typedef struct _tedutil_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } tedutil_MIDL_PROC_FORMAT_STRING;

typedef struct _tedutil_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } tedutil_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const tedutil_MIDL_TYPE_FORMAT_STRING tedutil__MIDL_TypeFormatString;
extern const tedutil_MIDL_PROC_FORMAT_STRING tedutil__MIDL_ProcFormatString;
extern const tedutil_MIDL_EXPR_FORMAT_STRING tedutil__MIDL_ExprFormatString;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const tedutil_MIDL_PROC_FORMAT_STRING tedutil__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const tedutil_MIDL_TYPE_FORMAT_STRING tedutil__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_tedutil_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITedVideoWindowHandler, ver. 0.0,
   GUID={0x72D92BD9,0xCA59,0x4bc7,{0x9F,0x40,0x2E,0x60,0x64,0x82,0x60,0x98}} */


/* Object interface: ITedTopoEventHandler, ver. 0.0,
   GUID={0xC2C3A379,0x3D36,0x4566,{0xAC,0x1B,0xA5,0x62,0x46,0x6C,0x02,0x1F}} */


/* Object interface: ITedPropertyInfo, ver. 0.0,
   GUID={0xC311E957,0xD926,0x4dd8,{0xBC,0xDE,0x6F,0x31,0xB4,0xDD,0xB1,0xAD}} */


/* Object interface: ITedPropertyController, ver. 0.0,
   GUID={0xD3903C3E,0xD5DF,0x43c1,{0xA0,0x99,0xAB,0xF7,0x4A,0x53,0x67,0x70}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITedTopoView, ver. 0.0,
   GUID={0x4C086376,0x9583,0x4906,{0xA0,0x6D,0xAA,0x57,0x04,0x24,0x07,0xDA}} */


/* Standard interface: __MIDL_itf_tedutil_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITedDataSaver, ver. 0.0,
   GUID={0xAAEB0E96,0x0214,0x42c4,{0x80,0xF1,0x3B,0xAD,0x06,0xF5,0x4F,0x58}} */


/* Object interface: ITedDataLoader, ver. 0.0,
   GUID={0x892FADFF,0x90BB,0x4189,{0x99,0x10,0x3F,0xBF,0x58,0xDA,0xA1,0xE8}} */


#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"



/* Standard interface: __MIDL_itf_tedutil_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITedVideoWindowHandler, ver. 0.0,
   GUID={0x72D92BD9,0xCA59,0x4bc7,{0x9F,0x40,0x2E,0x60,0x64,0x82,0x60,0x98}} */


/* Object interface: ITedTopoEventHandler, ver. 0.0,
   GUID={0xC2C3A379,0x3D36,0x4566,{0xAC,0x1B,0xA5,0x62,0x46,0x6C,0x02,0x1F}} */


/* Object interface: ITedPropertyInfo, ver. 0.0,
   GUID={0xC311E957,0xD926,0x4dd8,{0xBC,0xDE,0x6F,0x31,0xB4,0xDD,0xB1,0xAD}} */


/* Object interface: ITedPropertyController, ver. 0.0,
   GUID={0xD3903C3E,0xD5DF,0x43c1,{0xA0,0x99,0xAB,0xF7,0x4A,0x53,0x67,0x70}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITedTopoView, ver. 0.0,
   GUID={0x4C086376,0x9583,0x4906,{0xA0,0x6D,0xAA,0x57,0x04,0x24,0x07,0xDA}} */


/* Standard interface: __MIDL_itf_tedutil_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITedDataSaver, ver. 0.0,
   GUID={0xAAEB0E96,0x0214,0x42c4,{0x80,0xF1,0x3B,0xAD,0x06,0xF5,0x4F,0x58}} */


/* Object interface: ITedDataLoader, ver. 0.0,
   GUID={0x892FADFF,0x90BB,0x4189,{0x99,0x10,0x3F,0xBF,0x58,0xDA,0xA1,0xE8}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    tedutil__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _tedutil_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * const _tedutil_StubVtblList[] = 
{
    0
};

PCInterfaceName const _tedutil_InterfaceNamesList[] = 
{
    0
};


#define _tedutil_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _tedutil, pIID, n)

int __stdcall _tedutil_IID_Lookup( const IID * pIID, int * pIndex )
{
    UNREFERENCED_PARAMETER(pIID);
    UNREFERENCED_PARAMETER(pIndex);
    return 0;
}

const ExtendedProxyFileInfo tedutil_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _tedutil_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _tedutil_StubVtblList,
    (const PCInterfaceName * ) & _tedutil_InterfaceNamesList,
    0, /* no delegation */
    & _tedutil_IID_Lookup, 
    0,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

