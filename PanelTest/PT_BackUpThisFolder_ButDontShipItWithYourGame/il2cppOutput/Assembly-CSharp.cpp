#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TCP
struct TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// TCP/StateObject
struct StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61;

IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral049E7743CE70C407D33EDE9364C8A45A06400918;
IL2CPP_EXTERN_C String_t* _stringLiteral285B67AF2BE13612947C7428B15EF01D4C5DD24A;
IL2CPP_EXTERN_C String_t* _stringLiteral8F880D67A0003B9E3EE282AF3335184006851EC4;
IL2CPP_EXTERN_C String_t* _stringLiteralAC7EC7EAD095029300B6C9771488B5A45F0EC6C3;
IL2CPP_EXTERN_C String_t* _stringLiteralAD78860841BF438765B36980B789EF85177EC25D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* TCP_ConnectCallback_m2474E608B3590483455BC70D508D323A7C3A7B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TCP_ReceiveCallback_m8696CED393559B3FCB40FB3F0586C08BDCF1D0B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TCP_SendCallback_m2FB9EF15330B3C59DA390BEC77459B0C72D1C608_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490  : public RuntimeObject
{
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_13;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_14;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_15;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_16;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_17;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_18;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_19;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_20;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_21;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_22;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_23;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_24;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_25;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_26;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_27;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_40;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_41;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_42;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// TCP/StateObject
struct StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61  : public RuntimeObject
{
	// System.Net.Sockets.Socket TCP/StateObject::m_WorkSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_WorkSocket_0;
	// System.Byte[] TCP/StateObject::m_Bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Bytes_2;
	// System.Text.StringBuilder TCP/StateObject::m_SB
	StringBuilder_t* ___m_SB_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TCP
struct TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields
{
	// System.Threading.ManualResetEvent TCP::m_ConnectDone
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_ConnectDone_5;
	// System.Threading.ManualResetEvent TCP::m_SendDone
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_SendDone_6;
	// System.Threading.ManualResetEvent TCP::m_ReceiveDone
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_ReceiveDone_7;
	// System.String TCP::response
	String_t* ___response_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void TCP::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_StartClient_mBB4A5DEF8E809BBB290A3D1FE91537D4E799B0BD (const RuntimeMethod* method) ;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* Dns_GetHostEntry_m01156278E5CDAE38B7E1B2EC617F505A4B836D02 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.EndPoint,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginConnect_m5CBFB6B9DC973279CDC9E8935431972464F9E0B4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEP0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___state2, const RuntimeMethod* method) ;
// System.Void TCP::Send(System.Net.Sockets.Socket,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Send_m0AA492B5F643CFB01F32DABA6697FE603CD58518 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___client0, String_t* ___data1, const RuntimeMethod* method) ;
// System.Void TCP::Receive(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Receive_m77AE4759DEBA1EBA4A7EB1BAA9753014F910E4FA (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___client0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Shutdown_mA7D259CF81614B311DD97C3748144FB1284683E3 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___how0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_EndConnect_m10F5B4F43A68F96891DB3AEF493AB160CD8104D6 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* Socket_get_RemoteEndPoint_m6A626481D55A640C7654B91BFDE00199C2C95479 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void TCP/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_mB4DCE49FE11D0D316164B713937DD7F19CEDBC25 (StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* __this, const RuntimeMethod* method) ;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___state5, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_BeginSend_m36452399B2D44A215795BFB0F1E06AEFD451E7C3 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___state5, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_EndSend_mC636AB62DC23FA2E8BDB612F5CDB203E6CAE4D17 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCP::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Start_m64568E9324A887A9CAC918073F6EDFEAD0867549 (TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartClient();
		il2cpp_codegen_runtime_class_init_inline(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		TCP_StartClient_mBB4A5DEF8E809BBB290A3D1FE91537D4E799B0BD(NULL);
		// }
		return;
	}
}
// System.Void TCP::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Update_m5DF4F56C83B4306CF89240A22B12C96D1D703102 (TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TCP::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_StartClient_mBB4A5DEF8E809BBB290A3D1FE91537D4E799B0BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_ConnectCallback_m2474E608B3590483455BC70D508D323A7C3A7B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F880D67A0003B9E3EE282AF3335184006851EC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC7EC7EAD095029300B6C9771488B5A45F0EC6C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// IPHostEntry ipHostInfo = Dns.GetHostEntry("");
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_0;
		L_0 = Dns_GetHostEntry_m01156278E5CDAE38B7E1B2EC617F505A4B836D02(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// IPAddress iPAddress = ipHostInfo.AddressList[0];
		NullCheck(L_0);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_1;
		L_1 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// IPEndPoint remoteEP = new IPEndPoint(iPAddress, m_Port);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_4 = L_3;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_5 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_5, L_4, ((int32_t)7000), NULL);
		V_0 = L_5;
		// Socket client = new Socket(iPAddress.AddressFamily, SocketType.Stream, ProtocolType.Tcp);
		NullCheck(L_4);
		int32_t L_6;
		L_6 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_4, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_7, L_6, 1, 6, NULL);
		V_1 = L_7;
		// client.BeginConnect(remoteEP, new System.AsyncCallback(ConnectCallback), client);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_8 = V_1;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_9 = V_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_10 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_10, NULL, (intptr_t)((void*)TCP_ConnectCallback_m2474E608B3590483455BC70D508D323A7C3A7B06_RuntimeMethod_var), NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_11 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_12;
		L_12 = Socket_BeginConnect_m5CBFB6B9DC973279CDC9E8935431972464F9E0B4(L_8, L_9, L_10, L_11, NULL);
		// m_ConnectDone.WaitOne();
		il2cpp_codegen_runtime_class_init_inline(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_13 = ((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_ConnectDone_5;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_13);
		// Send(client, "Test <EOF>");
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_15 = V_1;
		TCP_Send_m0AA492B5F643CFB01F32DABA6697FE603CD58518(L_15, _stringLiteral8F880D67A0003B9E3EE282AF3335184006851EC4, NULL);
		// m_SendDone.WaitOne();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_16 = ((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_SendDone_6;
		NullCheck(L_16);
		bool L_17;
		L_17 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_16);
		// Receive(client);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_18 = V_1;
		TCP_Receive_m77AE4759DEBA1EBA4A7EB1BAA9753014F910E4FA(L_18, NULL);
		// m_ReceiveDone.WaitOne();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_19 = ((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_ReceiveDone_7;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_19);
		// Debug.Log("Response received : " + response);
		String_t* L_21 = ((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___response_8;
		String_t* L_22;
		L_22 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralAC7EC7EAD095029300B6C9771488B5A45F0EC6C3, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_22, NULL);
		// client.Shutdown(SocketShutdown.Both);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_23 = V_1;
		NullCheck(L_23);
		Socket_Shutdown_mA7D259CF81614B311DD97C3748144FB1284683E3(L_23, 2, NULL);
		// client.Close();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_24 = V_1;
		NullCheck(L_24);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_24, NULL);
		// }catch(Exception e)
		goto IL_00a0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0094;
		}
		throw e;
	}

CATCH_0094:
	{// begin catch(System.Exception)
		// Debug.Log(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_25, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a0;
	}// end catch (depth: 1)

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void TCP::ConnectCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_ConnectCallback_m2474E608B3590483455BC70D508D323A7C3A7B06 (RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285B67AF2BE13612947C7428B15EF01D4C5DD24A);
		s_Il2CppMethodInitialized = true;
	}
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Socket client = (Socket)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		V_0 = ((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var));
		// client.EndConnect(ar);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = V_0;
		RuntimeObject* L_3 = ___ar0;
		NullCheck(L_2);
		Socket_EndConnect_m10F5B4F43A68F96891DB3AEF493AB160CD8104D6(L_2, L_3, NULL);
		// Debug.Log("Socket Connect To : " + client.RemoteEndPoint.ToString());
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = V_0;
		NullCheck(L_4);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_5;
		L_5 = Socket_get_RemoteEndPoint_m6A626481D55A640C7654B91BFDE00199C2C95479(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral285B67AF2BE13612947C7428B15EF01D4C5DD24A, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		// m_ConnectDone.Set();
		il2cpp_codegen_runtime_class_init_inline(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_8 = ((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_ConnectDone_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_8, NULL);
		// }catch(Exception e)
		goto IL_0046;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003a;
		}
		throw e;
	}

CATCH_003a:
	{// begin catch(System.Exception)
		// Debug.Log(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_10, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0046;
	}// end catch (depth: 1)

IL_0046:
	{
		// }
		return;
	}
}
// System.Void TCP::Receive(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Receive_m77AE4759DEBA1EBA4A7EB1BAA9753014F910E4FA (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_ReceiveCallback_m8696CED393559B3FCB40FB3F0586C08BDCF1D0B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// StateObject state = new StateObject();
		StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_0 = (StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61*)il2cpp_codegen_object_new(StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StateObject__ctor_mB4DCE49FE11D0D316164B713937DD7F19CEDBC25(L_0, NULL);
		V_0 = L_0;
		// state.m_WorkSocket = client;
		StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_1 = V_0;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = ___client0;
		NullCheck(L_1);
		L_1->___m_WorkSocket_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___m_WorkSocket_0), (void*)L_2);
		// client.BeginReceive(state.m_Bytes, 0, StateObject.m_BufferSize, 0, new AsyncCallback(ReceiveCallback), state);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = ___client0;
		StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4->___m_Bytes_2;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_6 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_6, NULL, (intptr_t)((void*)TCP_ReceiveCallback_m8696CED393559B3FCB40FB3F0586C08BDCF1D0B4_RuntimeMethod_var), NULL);
		StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_7 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_8;
		L_8 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_3, L_5, 0, ((int32_t)256), 0, L_6, L_7, NULL);
		// }
		goto IL_003c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0030:
	{// begin catch(System.Exception)
		// Debug.Log(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003c;
	}// end catch (depth: 1)

IL_003c:
	{
		// }
		return;
	}
}
// System.Void TCP::ReceiveCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_ReceiveCallback_m8696CED393559B3FCB40FB3F0586C08BDCF1D0B4 (RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_ReceiveCallback_m8696CED393559B3FCB40FB3F0586C08BDCF1D0B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* V_0 = NULL;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// StateObject state = (StateObject)ar.AsyncState;
			RuntimeObject* L_0 = ___ar0;
			NullCheck(L_0);
			RuntimeObject* L_1;
			L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
			V_0 = ((StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61*)CastclassClass((RuntimeObject*)L_1, StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61_il2cpp_TypeInfo_var));
			// Socket client = (Socket)ar.AsyncState;
			RuntimeObject* L_2 = ___ar0;
			NullCheck(L_2);
			RuntimeObject* L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_2);
			V_1 = ((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_3, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var));
			// int bytesRead = client.EndReceive(ar);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_4 = V_1;
			RuntimeObject* L_5 = ___ar0;
			NullCheck(L_4);
			int32_t L_6;
			L_6 = Socket_EndReceive_mD86DB01FE084056F0DA43DBB82B6B491CA8F5364(L_4, L_5, NULL);
			V_2 = L_6;
			// if(bytesRead > 0)
			int32_t L_7 = V_2;
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_0065_1;
			}
		}
		{
			// state.m_SB.Append(Encoding.ASCII.GetString(state.m_Bytes, 0, bytesRead));
			StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_8 = V_0;
			NullCheck(L_8);
			StringBuilder_t* L_9 = L_8->___m_SB_3;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
			L_10 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
			StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_11 = V_0;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11->___m_Bytes_2;
			int32_t L_13 = V_2;
			NullCheck(L_10);
			String_t* L_14;
			L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_10, L_12, 0, L_13);
			NullCheck(L_9);
			StringBuilder_t* L_15;
			L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_14, NULL);
			// client.BeginReceive(state.m_Bytes, 0, StateObject.m_BufferSize, 0, new AsyncCallback(ReceiveCallback), state);
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_16 = V_1;
			StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_17 = V_0;
			NullCheck(L_17);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___m_Bytes_2;
			AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_19 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_19, NULL, (intptr_t)((void*)TCP_ReceiveCallback_m8696CED393559B3FCB40FB3F0586C08BDCF1D0B4_RuntimeMethod_var), NULL);
			StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_20 = V_0;
			NullCheck(L_16);
			RuntimeObject* L_21;
			L_21 = Socket_BeginReceive_mCCBDCDF0EE9A2AD7345F93A3931F2C426AFA4738(L_16, L_18, 0, ((int32_t)256), 0, L_19, L_20, NULL);
			goto IL_008e_1;
		}

IL_0065_1:
		{
			// if (state.m_SB.Length > 1)
			StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_22 = V_0;
			NullCheck(L_22);
			StringBuilder_t* L_23 = L_22->___m_SB_3;
			NullCheck(L_23);
			int32_t L_24;
			L_24 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_23, NULL);
			if ((((int32_t)L_24) <= ((int32_t)1)))
			{
				goto IL_0083_1;
			}
		}
		{
			// response = state.m_SB.ToString();
			StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* L_25 = V_0;
			NullCheck(L_25);
			StringBuilder_t* L_26 = L_25->___m_SB_3;
			NullCheck(L_26);
			String_t* L_27;
			L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
			il2cpp_codegen_runtime_class_init_inline(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
			((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___response_8 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___response_8), (void*)L_27);
		}

IL_0083_1:
		{
			// m_ReceiveDone.Set();
			il2cpp_codegen_runtime_class_init_inline(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_28 = ((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_ReceiveDone_7;
			NullCheck(L_28);
			bool L_29;
			L_29 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_28, NULL);
		}

IL_008e_1:
		{
			// }catch(Exception e)
			goto IL_009c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0090;
		}
		throw e;
	}

CATCH_0090:
	{// begin catch(System.Exception)
		// Debug.Log(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_30, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009c;
	}// end catch (depth: 1)

IL_009c:
	{
		// }
		return;
	}
}
// System.Void TCP::Send(System.Net.Sockets.Socket,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Send_m0AA492B5F643CFB01F32DABA6697FE603CD58518 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___client0, String_t* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_SendCallback_m2FB9EF15330B3C59DA390BEC77459B0C72D1C608_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] byteData = Encoding.ASCII.GetBytes(data);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		String_t* L_1 = ___data1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// client.BeginSend(byteData, 0, byteData.Length, 0, new AsyncCallback(SendCallback), client);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = ___client0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_6 = (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)il2cpp_codegen_object_new(AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AsyncCallback__ctor_mC3C0475E930E4419AED02C7335E53B425A2D68AC(L_6, NULL, (intptr_t)((void*)TCP_SendCallback_m2FB9EF15330B3C59DA390BEC77459B0C72D1C608_RuntimeMethod_var), NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_7 = ___client0;
		NullCheck(L_3);
		RuntimeObject* L_8;
		L_8 = Socket_BeginSend_m36452399B2D44A215795BFB0F1E06AEFD451E7C3(L_3, L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), 0, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void TCP::SendCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_SendCallback_m2FB9EF15330B3C59DA390BEC77459B0C72D1C608 (RuntimeObject* ___ar0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral049E7743CE70C407D33EDE9364C8A45A06400918);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD78860841BF438765B36980B789EF85177EC25D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Socket client = (Socket)ar.AsyncState;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, L_0);
		// int bytesSent = client.EndSend(ar);
		RuntimeObject* L_2 = ___ar0;
		NullCheck(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)));
		int32_t L_3;
		L_3 = Socket_EndSend_mC636AB62DC23FA2E8BDB612F5CDB203E6CAE4D17(((Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)CastclassClass((RuntimeObject*)L_1, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var)), L_2, NULL);
		V_0 = L_3;
		// Debug.Log("sned " + bytesSent + "bytes to setver ");
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral049E7743CE70C407D33EDE9364C8A45A06400918, L_4, _stringLiteralAD78860841BF438765B36980B789EF85177EC25D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// m_SendDone.Set();
		il2cpp_codegen_runtime_class_init_inline(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_6 = ((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_SendDone_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_6, NULL);
		// }catch(Exception e )
		goto IL_0046;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003a;
		}
		throw e;
	}

CATCH_003a:
	{// begin catch(System.Exception)
		// Debug.Log(e.ToString());
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0046;
	}// end catch (depth: 1)

IL_0046:
	{
		// }
		return;
	}
}
// System.Void TCP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP__ctor_mA098AD34615EE20CF2F0626B8BC1D350567B241F (TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void TCP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP__cctor_m3CC3D5EE0E6D813A6CBFDC9470CFC19AE1296512 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ManualResetEvent m_ConnectDone = new ManualResetEvent(false);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_0 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_0, (bool)0, NULL);
		((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_ConnectDone_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_ConnectDone_5), (void*)L_0);
		// private static ManualResetEvent m_SendDone = new ManualResetEvent(false);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_1 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_1, (bool)0, NULL);
		((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_SendDone_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_SendDone_6), (void*)L_1);
		// private static ManualResetEvent m_ReceiveDone = new ManualResetEvent(false);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_2 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_2, (bool)0, NULL);
		((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_ReceiveDone_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___m_ReceiveDone_7), (void*)L_2);
		// private static string response = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___response_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_StaticFields*)il2cpp_codegen_static_fields_for(TCP_t7BCCFC6BBDABF6699F2C185B7EEBC5DE9CD13326_il2cpp_TypeInfo_var))->___response_8), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TCP/StateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateObject__ctor_mB4DCE49FE11D0D316164B713937DD7F19CEDBC25 (StateObject_t26B6B457FEA7E48C3628C93D210F1C501AD69C61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public byte[] m_Bytes = new byte[m_BufferSize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___m_Bytes_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Bytes_2), (void*)L_0);
		// public StringBuilder m_SB = new StringBuilder();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		__this->___m_SB_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SB_3), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) 
{
	{
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = __this->___addressList_2;
		return L_0;
	}
}
