#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Customizing_Preset

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MirMobile_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Customizing_Preset.Customizing_Preset_C
// 0x0010 (0x0320 - 0x0310)
class UCustomizing_Preset_C final : public UMM_Customizing_Preset
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomizing_Preset_Item_C*             Customizing_Preset_Item_2;                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Customizing_Preset(int32 EntryPoint);
	TArray<class UMM_Customizing_PresetItem*> CreatePresetItem(int32 Count);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Customizing_Preset_C">();
	}
	static class UCustomizing_Preset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizing_Preset_C>();
	}
};
static_assert(alignof(UCustomizing_Preset_C) == 0x000008, "Wrong alignment on UCustomizing_Preset_C");
static_assert(sizeof(UCustomizing_Preset_C) == 0x000320, "Wrong size on UCustomizing_Preset_C");
static_assert(offsetof(UCustomizing_Preset_C, UberGraphFrame) == 0x000310, "Member 'UCustomizing_Preset_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCustomizing_Preset_C, Customizing_Preset_Item_2) == 0x000318, "Member 'UCustomizing_Preset_C::Customizing_Preset_Item_2' has a wrong offset!");

}

