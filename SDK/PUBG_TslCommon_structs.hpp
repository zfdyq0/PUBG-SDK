#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TslCommon.LogBase
// 0x0028
struct FLogBase
{
	int                                                _V;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     _D;                                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FString                                     _T;                                                       // 0x0018(0x0010) (CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
