#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Customizing_Palette_ColorItem

#include "Basic.hpp"

#include "MirMobile_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Customizing_Palette_ColorItem.Customizing_Palette_ColorItem_C
// 0x0020 (0x0360 - 0x0340)
class UCustomizing_Palette_ColorItem_C final : public UMM_Customizing_PaletteItem
{
public:
	class UMirButton*                             MirButton_0;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMirImage*                              MirImage_92;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMirImage*                              MirImage_Line;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMirButton*                             SelectButton;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Customizing_Palette_ColorItem_C">();
	}
	static class UCustomizing_Palette_ColorItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizing_Palette_ColorItem_C>();
	}
};
static_assert(alignof(UCustomizing_Palette_ColorItem_C) == 0x000008, "Wrong alignment on UCustomizing_Palette_ColorItem_C");
static_assert(sizeof(UCustomizing_Palette_ColorItem_C) == 0x000360, "Wrong size on UCustomizing_Palette_ColorItem_C");
static_assert(offsetof(UCustomizing_Palette_ColorItem_C, MirButton_0) == 0x000340, "Member 'UCustomizing_Palette_ColorItem_C::MirButton_0' has a wrong offset!");
static_assert(offsetof(UCustomizing_Palette_ColorItem_C, MirImage_92) == 0x000348, "Member 'UCustomizing_Palette_ColorItem_C::MirImage_92' has a wrong offset!");
static_assert(offsetof(UCustomizing_Palette_ColorItem_C, MirImage_Line) == 0x000350, "Member 'UCustomizing_Palette_ColorItem_C::MirImage_Line' has a wrong offset!");
static_assert(offsetof(UCustomizing_Palette_ColorItem_C, SelectButton) == 0x000358, "Member 'UCustomizing_Palette_ColorItem_C::SelectButton' has a wrong offset!");

}

