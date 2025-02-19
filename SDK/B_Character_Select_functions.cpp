#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Character_Select

#include "Basic.hpp"

#include "B_Character_Select_classes.hpp"
#include "B_Character_Select_parameters.hpp"


namespace SDK
{

// Function B_Character_Select.B_Character_Select_C.ExecuteUbergraph_B_Character_Select
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Character_Select_C::ExecuteUbergraph_B_Character_Select(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Character_Select_C", "ExecuteUbergraph_B_Character_Select");

	Params::B_Character_Select_C_ExecuteUbergraph_B_Character_Select Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Character_Select.B_Character_Select_C.MoveToClassSelectEvent
// (Event, Public, BlueprintEvent)

void UB_Character_Select_C::MoveToClassSelectEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Character_Select_C", "MoveToClassSelectEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Character_Select.B_Character_Select_C.PlayOpenAnimation
// (Event, Public, BlueprintEvent)

void UB_Character_Select_C::PlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Character_Select_C", "PlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Character_Select.B_Character_Select_C.FinishEvent
// (BlueprintCallable, BlueprintEvent)

void UB_Character_Select_C::FinishEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Character_Select_C", "FinishEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Character_Select.B_Character_Select_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UB_Character_Select_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Character_Select_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

