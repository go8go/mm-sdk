#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Character_Select

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MirMobile_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass B_Character_Select.B_Character_Select_C
// 0x0028 (0x0498 - 0x0470)
class UB_Character_Select_C final : public UMM_CharacterSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_DownLoad;                                      // 0x0478(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CloseCharacterSelect;                              // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OpenCharacterSelect;                               // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_3;                                        // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Character_Select(int32 EntryPoint);
	void MoveToClassSelectEvent();
	void PlayOpenAnimation();
	void FinishEvent();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Character_Select_C">();
	}
	static class UB_Character_Select_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_Character_Select_C>();
	}
};
static_assert(alignof(UB_Character_Select_C) == 0x000008, "Wrong alignment on UB_Character_Select_C");
static_assert(sizeof(UB_Character_Select_C) == 0x000498, "Wrong size on UB_Character_Select_C");
static_assert(offsetof(UB_Character_Select_C, UberGraphFrame) == 0x000470, "Member 'UB_Character_Select_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_Character_Select_C, Ani_DownLoad) == 0x000478, "Member 'UB_Character_Select_C::Ani_DownLoad' has a wrong offset!");
static_assert(offsetof(UB_Character_Select_C, CloseCharacterSelect) == 0x000480, "Member 'UB_Character_Select_C::CloseCharacterSelect' has a wrong offset!");
static_assert(offsetof(UB_Character_Select_C, OpenCharacterSelect) == 0x000488, "Member 'UB_Character_Select_C::OpenCharacterSelect' has a wrong offset!");
static_assert(offsetof(UB_Character_Select_C, SafeZone_3) == 0x000490, "Member 'UB_Character_Select_C::SafeZone_3' has a wrong offset!");

}

