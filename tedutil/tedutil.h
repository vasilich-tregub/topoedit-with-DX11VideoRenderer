

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __tedutil_h__
#define __tedutil_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITedVideoWindowHandler_FWD_DEFINED__
#define __ITedVideoWindowHandler_FWD_DEFINED__
typedef interface ITedVideoWindowHandler ITedVideoWindowHandler;

#endif 	/* __ITedVideoWindowHandler_FWD_DEFINED__ */


#ifndef __ITedTopoEventHandler_FWD_DEFINED__
#define __ITedTopoEventHandler_FWD_DEFINED__
typedef interface ITedTopoEventHandler ITedTopoEventHandler;

#endif 	/* __ITedTopoEventHandler_FWD_DEFINED__ */


#ifndef __ITedPropertyInfo_FWD_DEFINED__
#define __ITedPropertyInfo_FWD_DEFINED__
typedef interface ITedPropertyInfo ITedPropertyInfo;

#endif 	/* __ITedPropertyInfo_FWD_DEFINED__ */


#ifndef __ITedPropertyController_FWD_DEFINED__
#define __ITedPropertyController_FWD_DEFINED__
typedef interface ITedPropertyController ITedPropertyController;

#endif 	/* __ITedPropertyController_FWD_DEFINED__ */


#ifndef __ITedTopoView_FWD_DEFINED__
#define __ITedTopoView_FWD_DEFINED__
typedef interface ITedTopoView ITedTopoView;

#endif 	/* __ITedTopoView_FWD_DEFINED__ */


#ifndef __ITedDataSaver_FWD_DEFINED__
#define __ITedDataSaver_FWD_DEFINED__
typedef interface ITedDataSaver ITedDataSaver;

#endif 	/* __ITedDataSaver_FWD_DEFINED__ */


#ifndef __ITedDataLoader_FWD_DEFINED__
#define __ITedDataLoader_FWD_DEFINED__
typedef interface ITedDataLoader ITedDataLoader;

#endif 	/* __ITedDataLoader_FWD_DEFINED__ */


#ifndef __CTopoViewerController_FWD_DEFINED__
#define __CTopoViewerController_FWD_DEFINED__

#ifdef __cplusplus
typedef class CTopoViewerController CTopoViewerController;
#else
typedef struct CTopoViewerController CTopoViewerController;
#endif /* __cplusplus */

#endif 	/* __CTopoViewerController_FWD_DEFINED__ */


#ifndef __CXMLDataSaver_FWD_DEFINED__
#define __CXMLDataSaver_FWD_DEFINED__

#ifdef __cplusplus
typedef class CXMLDataSaver CXMLDataSaver;
#else
typedef struct CXMLDataSaver CXMLDataSaver;
#endif /* __cplusplus */

#endif 	/* __CXMLDataSaver_FWD_DEFINED__ */


#ifndef __CXMLDataLoader_FWD_DEFINED__
#define __CXMLDataLoader_FWD_DEFINED__

#ifdef __cplusplus
typedef class CXMLDataLoader CXMLDataLoader;
#else
typedef struct CXMLDataLoader CXMLDataLoader;
#endif /* __cplusplus */

#endif 	/* __CXMLDataLoader_FWD_DEFINED__ */


#ifndef __CTedTestSink_FWD_DEFINED__
#define __CTedTestSink_FWD_DEFINED__

#ifdef __cplusplus
typedef class CTedTestSink CTedTestSink;
#else
typedef struct CTedTestSink CTedTestSink;
#endif /* __cplusplus */

#endif 	/* __CTedTestSink_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "mfidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_tedutil_0000_0000 */
/* [local] */ 

typedef 
enum TED_ATTRIBUTE_CATEGORY
    {
        TED_ATTRIBUTE_CATEGORY_NONE	= 0,
        TED_ATTRIBUTE_CATEGORY_TOPONODE	= 1,
        TED_ATTRIBUTE_CATEGORY_MEDIATYPE	= 2,
        TED_ATTRIBUTE_CATEGORY_STREAMDESCRIPTOR	= 3,
        TED_ATTRIBUTE_CATEGORY_PRESENTATIONDESCRIPTOR	= 4,
        TED_ATTRIBUTE_CATEGORY_OTA	= 5
    } 	TED_ATTRIBUTE_CATEGORY;



extern RPC_IF_HANDLE __MIDL_itf_tedutil_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tedutil_0000_0000_v0_0_s_ifspec;

#ifndef __ITedVideoWindowHandler_INTERFACE_DEFINED__
#define __ITedVideoWindowHandler_INTERFACE_DEFINED__

/* interface ITedVideoWindowHandler */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITedVideoWindowHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72D92BD9-CA59-4bc7-9F40-2E6064826098")
    ITedVideoWindowHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetVideoWindow( 
            /* [out] */ LONG_PTR *pHwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseVideoWindow( 
            /* [in] */ LONG_PTR hwnd) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITedVideoWindowHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITedVideoWindowHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITedVideoWindowHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITedVideoWindowHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetVideoWindow )( 
            ITedVideoWindowHandler * This,
            /* [out] */ LONG_PTR *pHwnd);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseVideoWindow )( 
            ITedVideoWindowHandler * This,
            /* [in] */ LONG_PTR hwnd);
        
        END_INTERFACE
    } ITedVideoWindowHandlerVtbl;

    interface ITedVideoWindowHandler
    {
        CONST_VTBL struct ITedVideoWindowHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITedVideoWindowHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITedVideoWindowHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITedVideoWindowHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITedVideoWindowHandler_GetVideoWindow(This,pHwnd)	\
    ( (This)->lpVtbl -> GetVideoWindow(This,pHwnd) ) 

#define ITedVideoWindowHandler_ReleaseVideoWindow(This,hwnd)	\
    ( (This)->lpVtbl -> ReleaseVideoWindow(This,hwnd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITedVideoWindowHandler_INTERFACE_DEFINED__ */


#ifndef __ITedTopoEventHandler_INTERFACE_DEFINED__
#define __ITedTopoEventHandler_INTERFACE_DEFINED__

/* interface ITedTopoEventHandler */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITedTopoEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2C3A379-3D36-4566-AC1B-A562466C021F")
    ITedTopoEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE NotifyAddedNode( 
            int nNodeID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyRemovedNode( 
            int nNodeID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyConnection( 
            int nUpNodeID,
            int nDownNodeID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyDisconnection( 
            int nUpNodeID,
            int nDownNodeID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITedTopoEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITedTopoEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITedTopoEventHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITedTopoEventHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyAddedNode )( 
            ITedTopoEventHandler * This,
            int nNodeID);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyRemovedNode )( 
            ITedTopoEventHandler * This,
            int nNodeID);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyConnection )( 
            ITedTopoEventHandler * This,
            int nUpNodeID,
            int nDownNodeID);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyDisconnection )( 
            ITedTopoEventHandler * This,
            int nUpNodeID,
            int nDownNodeID);
        
        END_INTERFACE
    } ITedTopoEventHandlerVtbl;

    interface ITedTopoEventHandler
    {
        CONST_VTBL struct ITedTopoEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITedTopoEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITedTopoEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITedTopoEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITedTopoEventHandler_NotifyAddedNode(This,nNodeID)	\
    ( (This)->lpVtbl -> NotifyAddedNode(This,nNodeID) ) 

#define ITedTopoEventHandler_NotifyRemovedNode(This,nNodeID)	\
    ( (This)->lpVtbl -> NotifyRemovedNode(This,nNodeID) ) 

#define ITedTopoEventHandler_NotifyConnection(This,nUpNodeID,nDownNodeID)	\
    ( (This)->lpVtbl -> NotifyConnection(This,nUpNodeID,nDownNodeID) ) 

#define ITedTopoEventHandler_NotifyDisconnection(This,nUpNodeID,nDownNodeID)	\
    ( (This)->lpVtbl -> NotifyDisconnection(This,nUpNodeID,nDownNodeID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITedTopoEventHandler_INTERFACE_DEFINED__ */


#ifndef __ITedPropertyInfo_INTERFACE_DEFINED__
#define __ITedPropertyInfo_INTERFACE_DEFINED__

/* interface ITedPropertyInfo */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITedPropertyInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C311E957-D926-4dd8-BCDE-6F31B4DDB1AD")
    ITedPropertyInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyInfoName( 
            /* [annotation][out] */ 
            __deref_out  LPWSTR *szName,
            /* [annotation][out] */ 
            __out  TED_ATTRIBUTE_CATEGORY *pCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyCount( 
            /* [out] */ DWORD *pdwCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ DWORD dwIndex,
            /* [annotation][out] */ 
            __deref_out  LPWSTR *szName,
            /* [annotation][out] */ 
            __deref_out  LPWSTR *szValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyType( 
            /* [in] */ DWORD dwIndex,
            /* [out] */ VARTYPE *pVT) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsWriteable( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPCWSTR szName,
            /* [in] */ VARTYPE vt,
            /* [in] */ LPCWSTR szValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITedPropertyInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITedPropertyInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITedPropertyInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITedPropertyInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyInfoName )( 
            ITedPropertyInfo * This,
            /* [annotation][out] */ 
            __deref_out  LPWSTR *szName,
            /* [annotation][out] */ 
            __out  TED_ATTRIBUTE_CATEGORY *pCategory);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyCount )( 
            ITedPropertyInfo * This,
            /* [out] */ DWORD *pdwCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            ITedPropertyInfo * This,
            /* [in] */ DWORD dwIndex,
            /* [annotation][out] */ 
            __deref_out  LPWSTR *szName,
            /* [annotation][out] */ 
            __deref_out  LPWSTR *szValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyType )( 
            ITedPropertyInfo * This,
            /* [in] */ DWORD dwIndex,
            /* [out] */ VARTYPE *pVT);
        
        HRESULT ( STDMETHODCALLTYPE *IsWriteable )( 
            ITedPropertyInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            ITedPropertyInfo * This,
            /* [in] */ DWORD dwIndex,
            /* [in] */ LPCWSTR szName,
            /* [in] */ VARTYPE vt,
            /* [in] */ LPCWSTR szValue);
        
        END_INTERFACE
    } ITedPropertyInfoVtbl;

    interface ITedPropertyInfo
    {
        CONST_VTBL struct ITedPropertyInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITedPropertyInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITedPropertyInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITedPropertyInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITedPropertyInfo_GetPropertyInfoName(This,szName,pCategory)	\
    ( (This)->lpVtbl -> GetPropertyInfoName(This,szName,pCategory) ) 

#define ITedPropertyInfo_GetPropertyCount(This,pdwCount)	\
    ( (This)->lpVtbl -> GetPropertyCount(This,pdwCount) ) 

#define ITedPropertyInfo_GetProperty(This,dwIndex,szName,szValue)	\
    ( (This)->lpVtbl -> GetProperty(This,dwIndex,szName,szValue) ) 

#define ITedPropertyInfo_GetPropertyType(This,dwIndex,pVT)	\
    ( (This)->lpVtbl -> GetPropertyType(This,dwIndex,pVT) ) 

#define ITedPropertyInfo_IsWriteable(This)	\
    ( (This)->lpVtbl -> IsWriteable(This) ) 

#define ITedPropertyInfo_SetProperty(This,dwIndex,szName,vt,szValue)	\
    ( (This)->lpVtbl -> SetProperty(This,dwIndex,szName,vt,szValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITedPropertyInfo_INTERFACE_DEFINED__ */


#ifndef __ITedPropertyController_INTERFACE_DEFINED__
#define __ITedPropertyController_INTERFACE_DEFINED__

/* interface ITedPropertyController */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITedPropertyController;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3903C3E-D5DF-43c1-A099-ABF74A536770")
    ITedPropertyController : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ClearProperties( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPropertyInfo( 
            /* [in] */ ITedPropertyInfo *pInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITedPropertyControllerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITedPropertyController * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITedPropertyController * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITedPropertyController * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearProperties )( 
            ITedPropertyController * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropertyInfo )( 
            ITedPropertyController * This,
            /* [in] */ ITedPropertyInfo *pInfo);
        
        END_INTERFACE
    } ITedPropertyControllerVtbl;

    interface ITedPropertyController
    {
        CONST_VTBL struct ITedPropertyControllerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITedPropertyController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITedPropertyController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITedPropertyController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITedPropertyController_ClearProperties(This)	\
    ( (This)->lpVtbl -> ClearProperties(This) ) 

#define ITedPropertyController_AddPropertyInfo(This,pInfo)	\
    ( (This)->lpVtbl -> AddPropertyInfo(This,pInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITedPropertyController_INTERFACE_DEFINED__ */


#ifndef __ITedTopoView_INTERFACE_DEFINED__
#define __ITedTopoView_INTERFACE_DEFINED__

/* interface ITedTopoView */
/* [local][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ITedTopoView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C086376-9583-4906-A06D-AA57042407DA")
    ITedTopoView : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ ITedVideoWindowHandler *pVideoWindowHandler,
            /* [in] */ ITedPropertyController *pPropertyController,
            /* [in] */ ITedTopoEventHandler *pEventHandler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTopoWindow( 
            /* [in] */ LPCWSTR szTitle,
            /* [in] */ DWORD dwStyle,
            /* [in] */ DWORD x,
            /* [in] */ DWORD y,
            /* [in] */ DWORD width,
            /* [in] */ DWORD height,
            /* [in] */ LONG_PTR hWndParent,
            /* [out] */ LONG_PTR *phWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseTopoWindow( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEditable( 
            /* [in] */ BOOL fEditable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSaved( 
            /* [out] */ BOOL *pfIsSaved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NewTopology( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowTopology( 
            /* [in] */ IMFTopology *pTopology,
            /* [in] */ LPCWSTR wszSourceURL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MergeTopology( 
            /* [in] */ IMFTopology *pTopology) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadTopology( 
            /* [in] */ LPCWSTR wszFilename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveTopology( 
            /* [in] */ LPCWSTR wszFilename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTopology( 
            /* [out] */ IMFTopology **ppTopology,
            /* [out] */ BOOL *pfIsProtected) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddSource( 
            /* [in] */ LPCWSTR wszSourceURL) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddSAR( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddEVR( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddDX11VR( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTransform( 
            /* [in] */ GUID gidTransformID,
            /* [in] */ LPCWSTR wszTransformName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTransformActivate( 
            /* [in] */ IMFActivate *pTransformActivate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTee( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddSink( 
            /* [in] */ IMFMediaSink *pSink) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCustomSink( 
            /* [in] */ GUID gidSinkID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCaptureSource( 
            /* [in] */ IMFMediaSource *pSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteSelectedNode( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SpySelectedNode( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITedTopoViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITedTopoView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITedTopoView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITedTopoView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITedTopoView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITedTopoView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITedTopoView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITedTopoView * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Init )( 
            ITedTopoView * This,
            /* [in] */ ITedVideoWindowHandler *pVideoWindowHandler,
            /* [in] */ ITedPropertyController *pPropertyController,
            /* [in] */ ITedTopoEventHandler *pEventHandler);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTopoWindow )( 
            ITedTopoView * This,
            /* [in] */ LPCWSTR szTitle,
            /* [in] */ DWORD dwStyle,
            /* [in] */ DWORD x,
            /* [in] */ DWORD y,
            /* [in] */ DWORD width,
            /* [in] */ DWORD height,
            /* [in] */ LONG_PTR hWndParent,
            /* [out] */ LONG_PTR *phWnd);
        
        HRESULT ( STDMETHODCALLTYPE *CloseTopoWindow )( 
            ITedTopoView * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetEditable )( 
            ITedTopoView * This,
            /* [in] */ BOOL fEditable);
        
        HRESULT ( STDMETHODCALLTYPE *IsSaved )( 
            ITedTopoView * This,
            /* [out] */ BOOL *pfIsSaved);
        
        HRESULT ( STDMETHODCALLTYPE *NewTopology )( 
            ITedTopoView * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowTopology )( 
            ITedTopoView * This,
            /* [in] */ IMFTopology *pTopology,
            /* [in] */ LPCWSTR wszSourceURL);
        
        HRESULT ( STDMETHODCALLTYPE *MergeTopology )( 
            ITedTopoView * This,
            /* [in] */ IMFTopology *pTopology);
        
        HRESULT ( STDMETHODCALLTYPE *LoadTopology )( 
            ITedTopoView * This,
            /* [in] */ LPCWSTR wszFilename);
        
        HRESULT ( STDMETHODCALLTYPE *SaveTopology )( 
            ITedTopoView * This,
            /* [in] */ LPCWSTR wszFilename);
        
        HRESULT ( STDMETHODCALLTYPE *GetTopology )( 
            ITedTopoView * This,
            /* [out] */ IMFTopology **ppTopology,
            /* [out] */ BOOL *pfIsProtected);
        
        HRESULT ( STDMETHODCALLTYPE *AddSource )( 
            ITedTopoView * This,
            /* [in] */ LPCWSTR wszSourceURL);
        
        HRESULT ( STDMETHODCALLTYPE *AddSAR )( 
            ITedTopoView * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddEVR )( 
            ITedTopoView * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddDX11VR )( 
            ITedTopoView * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTransform )( 
            ITedTopoView * This,
            /* [in] */ GUID gidTransformID,
            /* [in] */ LPCWSTR wszTransformName);
        
        HRESULT ( STDMETHODCALLTYPE *AddTransformActivate )( 
            ITedTopoView * This,
            /* [in] */ IMFActivate *pTransformActivate);
        
        HRESULT ( STDMETHODCALLTYPE *AddTee )( 
            ITedTopoView * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddSink )( 
            ITedTopoView * This,
            /* [in] */ IMFMediaSink *pSink);
        
        HRESULT ( STDMETHODCALLTYPE *AddCustomSink )( 
            ITedTopoView * This,
            /* [in] */ GUID gidSinkID);
        
        HRESULT ( STDMETHODCALLTYPE *AddCaptureSource )( 
            ITedTopoView * This,
            /* [in] */ IMFMediaSource *pSource);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteSelectedNode )( 
            ITedTopoView * This);
        
        HRESULT ( STDMETHODCALLTYPE *SpySelectedNode )( 
            ITedTopoView * This);
        
        END_INTERFACE
    } ITedTopoViewVtbl;

    interface ITedTopoView
    {
        CONST_VTBL struct ITedTopoViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITedTopoView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITedTopoView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITedTopoView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITedTopoView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITedTopoView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITedTopoView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITedTopoView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITedTopoView_Init(This,pVideoWindowHandler,pPropertyController,pEventHandler)	\
    ( (This)->lpVtbl -> Init(This,pVideoWindowHandler,pPropertyController,pEventHandler) ) 

#define ITedTopoView_CreateTopoWindow(This,szTitle,dwStyle,x,y,width,height,hWndParent,phWnd)	\
    ( (This)->lpVtbl -> CreateTopoWindow(This,szTitle,dwStyle,x,y,width,height,hWndParent,phWnd) ) 

#define ITedTopoView_CloseTopoWindow(This)	\
    ( (This)->lpVtbl -> CloseTopoWindow(This) ) 

#define ITedTopoView_SetEditable(This,fEditable)	\
    ( (This)->lpVtbl -> SetEditable(This,fEditable) ) 

#define ITedTopoView_IsSaved(This,pfIsSaved)	\
    ( (This)->lpVtbl -> IsSaved(This,pfIsSaved) ) 

#define ITedTopoView_NewTopology(This)	\
    ( (This)->lpVtbl -> NewTopology(This) ) 

#define ITedTopoView_ShowTopology(This,pTopology,wszSourceURL)	\
    ( (This)->lpVtbl -> ShowTopology(This,pTopology,wszSourceURL) ) 

#define ITedTopoView_MergeTopology(This,pTopology)	\
    ( (This)->lpVtbl -> MergeTopology(This,pTopology) ) 

#define ITedTopoView_LoadTopology(This,wszFilename)	\
    ( (This)->lpVtbl -> LoadTopology(This,wszFilename) ) 

#define ITedTopoView_SaveTopology(This,wszFilename)	\
    ( (This)->lpVtbl -> SaveTopology(This,wszFilename) ) 

#define ITedTopoView_GetTopology(This,ppTopology,pfIsProtected)	\
    ( (This)->lpVtbl -> GetTopology(This,ppTopology,pfIsProtected) ) 

#define ITedTopoView_AddSource(This,wszSourceURL)	\
    ( (This)->lpVtbl -> AddSource(This,wszSourceURL) ) 

#define ITedTopoView_AddSAR(This)	\
    ( (This)->lpVtbl -> AddSAR(This) ) 

#define ITedTopoView_AddEVR(This)	\
    ( (This)->lpVtbl -> AddEVR(This) ) 

#define ITedTopoView_AddDX11VR(This)	\
    ( (This)->lpVtbl -> AddDX11VR(This) ) 

#define ITedTopoView_AddTransform(This,gidTransformID,wszTransformName)	\
    ( (This)->lpVtbl -> AddTransform(This,gidTransformID,wszTransformName) ) 

#define ITedTopoView_AddTransformActivate(This,pTransformActivate)	\
    ( (This)->lpVtbl -> AddTransformActivate(This,pTransformActivate) ) 

#define ITedTopoView_AddTee(This)	\
    ( (This)->lpVtbl -> AddTee(This) ) 

#define ITedTopoView_AddSink(This,pSink)	\
    ( (This)->lpVtbl -> AddSink(This,pSink) ) 

#define ITedTopoView_AddCustomSink(This,gidSinkID)	\
    ( (This)->lpVtbl -> AddCustomSink(This,gidSinkID) ) 

#define ITedTopoView_AddCaptureSource(This,pSource)	\
    ( (This)->lpVtbl -> AddCaptureSource(This,pSource) ) 

#define ITedTopoView_DeleteSelectedNode(This)	\
    ( (This)->lpVtbl -> DeleteSelectedNode(This) ) 

#define ITedTopoView_SpySelectedNode(This)	\
    ( (This)->lpVtbl -> SpySelectedNode(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITedTopoView_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_tedutil_0000_0005 */
/* [local] */ 

STDAPI TEDCreateTopoViewer(
    ITedVideoWindowHandler* pVideoWindowHandler,
    ITedPropertyController* pPropertyController,
    ITedTopoEventHandler* pEventHandler,
    __out ITedTopoView** ppTopoViewer
    );


extern RPC_IF_HANDLE __MIDL_itf_tedutil_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tedutil_0000_0005_v0_0_s_ifspec;

#ifndef __ITedDataSaver_INTERFACE_DEFINED__
#define __ITedDataSaver_INTERFACE_DEFINED__

/* interface ITedDataSaver */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITedDataSaver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AAEB0E96-0214-42c4-80F1-3BAD06F54F58")
    ITedDataSaver : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Init( 
            LPCWSTR strDocName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSaveObject( 
            LPCWSTR strName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSaveChildObjects( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSaveChildObjects( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveData( 
            LPCWSTR strName,
            LPCWSTR strValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveToFile( 
            LPCWSTR strFileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITedDataSaverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITedDataSaver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITedDataSaver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITedDataSaver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITedDataSaver * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITedDataSaver * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITedDataSaver * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITedDataSaver * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Init )( 
            ITedDataSaver * This,
            LPCWSTR strDocName);
        
        HRESULT ( STDMETHODCALLTYPE *BeginSaveObject )( 
            ITedDataSaver * This,
            LPCWSTR strName);
        
        HRESULT ( STDMETHODCALLTYPE *BeginSaveChildObjects )( 
            ITedDataSaver * This);
        
        HRESULT ( STDMETHODCALLTYPE *EndSaveChildObjects )( 
            ITedDataSaver * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveData )( 
            ITedDataSaver * This,
            LPCWSTR strName,
            LPCWSTR strValue);
        
        HRESULT ( STDMETHODCALLTYPE *SaveToFile )( 
            ITedDataSaver * This,
            LPCWSTR strFileName);
        
        END_INTERFACE
    } ITedDataSaverVtbl;

    interface ITedDataSaver
    {
        CONST_VTBL struct ITedDataSaverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITedDataSaver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITedDataSaver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITedDataSaver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITedDataSaver_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITedDataSaver_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITedDataSaver_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITedDataSaver_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITedDataSaver_Init(This,strDocName)	\
    ( (This)->lpVtbl -> Init(This,strDocName) ) 

#define ITedDataSaver_BeginSaveObject(This,strName)	\
    ( (This)->lpVtbl -> BeginSaveObject(This,strName) ) 

#define ITedDataSaver_BeginSaveChildObjects(This)	\
    ( (This)->lpVtbl -> BeginSaveChildObjects(This) ) 

#define ITedDataSaver_EndSaveChildObjects(This)	\
    ( (This)->lpVtbl -> EndSaveChildObjects(This) ) 

#define ITedDataSaver_SaveData(This,strName,strValue)	\
    ( (This)->lpVtbl -> SaveData(This,strName,strValue) ) 

#define ITedDataSaver_SaveToFile(This,strFileName)	\
    ( (This)->lpVtbl -> SaveToFile(This,strFileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITedDataSaver_INTERFACE_DEFINED__ */


#ifndef __ITedDataLoader_INTERFACE_DEFINED__
#define __ITedDataLoader_INTERFACE_DEFINED__

/* interface ITedDataLoader */
/* [local][uuid][object] */ 


EXTERN_C const IID IID_ITedDataLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("892FADFF-90BB-4189-9910-3FBF58DAA1E8")
    ITedDataLoader : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HasNextObject( 
            /* [annotation][out] */ 
            __out  BOOL *pfHasNextObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextObject( 
            /* [annotation][out] */ 
            __deref_out  LPWSTR *strName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasChildObjects( 
            /* [annotation][out] */ 
            __out  BOOL *pfHasChildObjects) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginLoadChildObjects( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndLoadChildObjects( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadData( 
            LPCWSTR strName,
            /* [annotation][out] */ 
            __deref_out  LPWSTR *strValue,
            long nIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadFromFile( 
            LPCWSTR strFileName,
            LPCWSTR strDocName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITedDataLoaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITedDataLoader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITedDataLoader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITedDataLoader * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITedDataLoader * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITedDataLoader * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITedDataLoader * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITedDataLoader * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *HasNextObject )( 
            ITedDataLoader * This,
            /* [annotation][out] */ 
            __out  BOOL *pfHasNextObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextObject )( 
            ITedDataLoader * This,
            /* [annotation][out] */ 
            __deref_out  LPWSTR *strName);
        
        HRESULT ( STDMETHODCALLTYPE *HasChildObjects )( 
            ITedDataLoader * This,
            /* [annotation][out] */ 
            __out  BOOL *pfHasChildObjects);
        
        HRESULT ( STDMETHODCALLTYPE *BeginLoadChildObjects )( 
            ITedDataLoader * This);
        
        HRESULT ( STDMETHODCALLTYPE *EndLoadChildObjects )( 
            ITedDataLoader * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadData )( 
            ITedDataLoader * This,
            LPCWSTR strName,
            /* [annotation][out] */ 
            __deref_out  LPWSTR *strValue,
            long nIndex);
        
        HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            ITedDataLoader * This,
            LPCWSTR strFileName,
            LPCWSTR strDocName);
        
        END_INTERFACE
    } ITedDataLoaderVtbl;

    interface ITedDataLoader
    {
        CONST_VTBL struct ITedDataLoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITedDataLoader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITedDataLoader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITedDataLoader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITedDataLoader_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITedDataLoader_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITedDataLoader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITedDataLoader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITedDataLoader_HasNextObject(This,pfHasNextObject)	\
    ( (This)->lpVtbl -> HasNextObject(This,pfHasNextObject) ) 

#define ITedDataLoader_GetNextObject(This,strName)	\
    ( (This)->lpVtbl -> GetNextObject(This,strName) ) 

#define ITedDataLoader_HasChildObjects(This,pfHasChildObjects)	\
    ( (This)->lpVtbl -> HasChildObjects(This,pfHasChildObjects) ) 

#define ITedDataLoader_BeginLoadChildObjects(This)	\
    ( (This)->lpVtbl -> BeginLoadChildObjects(This) ) 

#define ITedDataLoader_EndLoadChildObjects(This)	\
    ( (This)->lpVtbl -> EndLoadChildObjects(This) ) 

#define ITedDataLoader_LoadData(This,strName,strValue,nIndex)	\
    ( (This)->lpVtbl -> LoadData(This,strName,strValue,nIndex) ) 

#define ITedDataLoader_LoadFromFile(This,strFileName,strDocName)	\
    ( (This)->lpVtbl -> LoadFromFile(This,strFileName,strDocName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITedDataLoader_INTERFACE_DEFINED__ */



#ifndef __TedUtil_LIBRARY_DEFINED__
#define __TedUtil_LIBRARY_DEFINED__

/* library TedUtil */
/* [version][helpstringdll][helpstring][uuid] */ 


EXTERN_C const IID LIBID_TedUtil;

EXTERN_C const CLSID CLSID_CTopoViewerController;

#ifdef __cplusplus

class DECLSPEC_UUID("7B0BB325-CC66-459e-B393-5D42937AAAA2")
CTopoViewerController;
#endif

EXTERN_C const CLSID CLSID_CXMLDataSaver;

#ifdef __cplusplus

class DECLSPEC_UUID("F517B713-86B1-4bc3-BF16-F09119F6725A")
CXMLDataSaver;
#endif

EXTERN_C const CLSID CLSID_CXMLDataLoader;

#ifdef __cplusplus

class DECLSPEC_UUID("01917079-8954-49a8-B9B8-3318728ADA25")
CXMLDataLoader;
#endif

EXTERN_C const CLSID CLSID_CTedTestSink;

#ifdef __cplusplus

class DECLSPEC_UUID("3A59CBE9-E5D7-4769-9D3A-4EE0F327A3C3")
CTedTestSink;
#endif
#endif /* __TedUtil_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


