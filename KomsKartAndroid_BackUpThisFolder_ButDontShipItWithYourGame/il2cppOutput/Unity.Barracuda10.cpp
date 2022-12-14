#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>
struct Dictionary_2_tDBEE521E49BDA88413119EB90824C6AD687D4E03;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Barracuda.Layer>
struct KeyCollection_tF3F5BBC19076E88E8E1C8A7C907A1BAEF0DE785B;
// System.Predicate`1<System.String>
struct Predicate_1_tEB15485FDAFC48C82EE54427A8DBDB401213706C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Barracuda.Layer>
struct ValueCollection_tBBCF0C06211CFEAB06244E4E48D9E16D57E600AA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Barracuda.Layer>[]
struct EntryU5BU5D_t71B96502E035858038E3DBE02B00A5C492AB1B95;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.String
struct String_t;
// Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t0533D219AB58979DA5EA53F9F87D2423CB2A138C;
// Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1
struct U3CU3Ec__DisplayClass8_1_t4C901D55DC325DB16C5AA2E9B4EAFEF87C149392;

IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m726569FB4B8336FDFEF3081ECE25F339C7517BC8_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>
struct Dictionary_2_tDBEE521E49BDA88413119EB90824C6AD687D4E03  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t71B96502E035858038E3DBE02B00A5C492AB1B95* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF3F5BBC19076E88E8E1C8A7C907A1BAEF0DE785B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBBCF0C06211CFEAB06244E4E48D9E16D57E600AA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

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

// Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t0533D219AB58979DA5EA53F9F87D2423CB2A138C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer> Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::constantLayers
	Dictionary_2_tDBEE521E49BDA88413119EB90824C6AD687D4E03* ___constantLayers_0;
	// System.Func`2<System.String,System.Boolean> Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::<>9__0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__0_1;
	// System.Predicate`1<System.String> Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::<>9__1
	Predicate_1_tEB15485FDAFC48C82EE54427A8DBDB401213706C* ___U3CU3E9__1_2;
};

// Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1
struct U3CU3Ec__DisplayClass8_1_t4C901D55DC325DB16C5AA2E9B4EAFEF87C149392  : public RuntimeObject
{
	// System.String Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1::constInput
	String_t* ___constInput_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t82B4091189C4C589DBBE88730C3BC7A9CF700151  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t82B4091189C4C589DBBE88730C3BC7A9CF700151_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::0A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___0A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::15C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___15C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___1610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___1645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___1794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___1E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::20A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___20A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::20DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___20DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___2A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___2A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::4B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___4B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::57BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___57BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___5893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___5A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___5B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___5E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___6256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::63768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___63768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::69E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___69E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___6E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::6F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___6F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___7D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___7DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___7F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::81A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___81A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::81C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___81C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___8BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___8EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::8EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___8EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___9237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::98A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___98A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___9CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___9E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE
	__StaticArrayInitTypeSizeU3D16_t5331C636FB6B3D148DA708BE1CCA6F6364F2AB31 ___F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40
	__StaticArrayInitTypeSizeU3D32_t4C8BA6E5600180668042DA648320F1D8150BB9DA ___FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_64;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m726569FB4B8336FDFEF3081ECE25F339C7517BC8 (Dictionary_2_tDBEE521E49BDA88413119EB90824C6AD687D4E03* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDBEE521E49BDA88413119EB90824C6AD687D4E03*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m0D20C184A021BF982E3D9F1CD3AB78AC9B8F8334 (U3CU3Ec__DisplayClass8_0_t0533D219AB58979DA5EA53F9F87D2423CB2A138C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::<PackConstantsForMathOps>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__0_m0D62F333832EFAA7DBB633FCA8177A0A3B0DF0FF (U3CU3Ec__DisplayClass8_0_t0533D219AB58979DA5EA53F9F87D2423CB2A138C* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m726569FB4B8336FDFEF3081ECE25F339C7517BC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var constInputs = layer.inputs.Count(x => constantLayers.ContainsKey(x));
		Dictionary_2_tDBEE521E49BDA88413119EB90824C6AD687D4E03* L_0 = __this->___constantLayers_0;
		String_t* L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m726569FB4B8336FDFEF3081ECE25F339C7517BC8(L_0, L_1, Dictionary_2_ContainsKey_m726569FB4B8336FDFEF3081ECE25F339C7517BC8_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_0::<PackConstantsForMathOps>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CPackConstantsForMathOpsU3Eb__1_m96B4545FFC0BAD0F3966DEB7C6EA1EF3AE0CFB6C (U3CU3Ec__DisplayClass8_0_t0533D219AB58979DA5EA53F9F87D2423CB2A138C* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m726569FB4B8336FDFEF3081ECE25F339C7517BC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var constInput = layer.inputs.ToList().Find(x => constantLayers.ContainsKey(x));
		Dictionary_2_tDBEE521E49BDA88413119EB90824C6AD687D4E03* L_0 = __this->___constantLayers_0;
		String_t* L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m726569FB4B8336FDFEF3081ECE25F339C7517BC8(L_0, L_1, Dictionary_2_ContainsKey_m726569FB4B8336FDFEF3081ECE25F339C7517BC8_RuntimeMethod_var);
		return L_2;
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
// System.Void Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_1__ctor_mD65214C205DE91BF78F1E01E5DE2F4223A073884 (U3CU3Ec__DisplayClass8_1_t4C901D55DC325DB16C5AA2E9B4EAFEF87C149392* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.Optimization.FuseLinearLayersPass/<>c__DisplayClass8_1::<PackConstantsForMathOps>b__2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_1_U3CPackConstantsForMathOpsU3Eb__2_mB3C231B9E782CE4FE9FB4915BDCA589E6DB5D755 (U3CU3Ec__DisplayClass8_1_t4C901D55DC325DB16C5AA2E9B4EAFEF87C149392* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	{
		// model.layers[l].inputs = layer.inputs.Where(x => x != constInput).ToArray();
		String_t* L_0 = ___x0;
		String_t* L_1 = __this->___constInput_0;
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_1, NULL);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
