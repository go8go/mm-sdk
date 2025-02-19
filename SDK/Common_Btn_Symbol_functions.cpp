#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Common_Btn_Symbol

#include "Basic.hpp"

#include "Common_Btn_Symbol_classes.hpp"
#include "Common_Btn_Symbol_parameters.hpp"


namespace SDK
{

// Function Common_Btn_Symbol.Common_Btn_Symbol_C.ExecuteUbergraph_Common_Btn_Symbol
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommon_Btn_Symbol_C::ExecuteUbergraph_Common_Btn_Symbol(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_Btn_Symbol_C", "ExecuteUbergraph_Common_Btn_Symbol");

	Params::Common_Btn_Symbol_C_ExecuteUbergraph_Common_Btn_Symbol Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Common_Btn_Symbol.Common_Btn_Symbol_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommon_Btn_Symbol_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_Btn_Symbol_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Common_Btn_Symbol.Common_Btn_Symbol_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommon_Btn_Symbol_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_Btn_Symbol_C", "PreConstruct");

	Params::Common_Btn_Symbol_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

