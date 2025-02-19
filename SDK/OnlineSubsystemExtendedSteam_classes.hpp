#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemExtendedSteam

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemExtendedSteam.OnlineSubsystemExtendedSteamBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UOnlineSubsystemExtendedSteamBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ChangeActiveWidget(class UCanvasPanel* ActiveWidget);
	static bool CheckIfPlayerLoggedIn();
	static class FString GetAccessToken();
	static bool GetAllCachedSteamUsersInfo(TArray<struct FSteamProfile>* Users);
	static struct FSteamProfile GetCachedSteamUserInfo(const class FString& UserID);
	static class FString GetUserId();
	static class FString GetUsername();
	static void ResetActiveWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineSubsystemExtendedSteamBlueprintLibrary">();
	}
	static class UOnlineSubsystemExtendedSteamBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineSubsystemExtendedSteamBlueprintLibrary>();
	}
};
static_assert(alignof(UOnlineSubsystemExtendedSteamBlueprintLibrary) == 0x000008, "Wrong alignment on UOnlineSubsystemExtendedSteamBlueprintLibrary");
static_assert(sizeof(UOnlineSubsystemExtendedSteamBlueprintLibrary) == 0x000028, "Wrong size on UOnlineSubsystemExtendedSteamBlueprintLibrary");

// Class OnlineSubsystemExtendedSteam.OnlineSubsystemExtendedSteamWebBrowser
// 0x0038 (0x0140 - 0x0108)
class UOnlineSubsystemExtendedSteamWebBrowser final : public UWidget
{
public:
	UMulticastInlineDelegateProperty_             OnUrlChanged;                                      // 0x0108(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 InitialURL;                                        // 0x0118(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsTransparency;                             // 0x0128(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_129[0x17];                                     // 0x0129(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void EnableIME();
	void LoadURL(const class FString& NewURL);
	void OnUrlChanged__DelegateSignature(const class FText& Text);
	void SetFocusToBrowser();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineSubsystemExtendedSteamWebBrowser">();
	}
	static class UOnlineSubsystemExtendedSteamWebBrowser* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineSubsystemExtendedSteamWebBrowser>();
	}
};
static_assert(alignof(UOnlineSubsystemExtendedSteamWebBrowser) == 0x000008, "Wrong alignment on UOnlineSubsystemExtendedSteamWebBrowser");
static_assert(sizeof(UOnlineSubsystemExtendedSteamWebBrowser) == 0x000140, "Wrong size on UOnlineSubsystemExtendedSteamWebBrowser");
static_assert(offsetof(UOnlineSubsystemExtendedSteamWebBrowser, OnUrlChanged) == 0x000108, "Member 'UOnlineSubsystemExtendedSteamWebBrowser::OnUrlChanged' has a wrong offset!");
static_assert(offsetof(UOnlineSubsystemExtendedSteamWebBrowser, InitialURL) == 0x000118, "Member 'UOnlineSubsystemExtendedSteamWebBrowser::InitialURL' has a wrong offset!");
static_assert(offsetof(UOnlineSubsystemExtendedSteamWebBrowser, bSupportsTransparency) == 0x000128, "Member 'UOnlineSubsystemExtendedSteamWebBrowser::bSupportsTransparency' has a wrong offset!");

// Class OnlineSubsystemExtendedSteam.OnlineSubsystemExtendedSteamWidget
// 0x0048 (0x0288 - 0x0240)
class UOnlineSubsystemExtendedSteamWidget final : public UUserWidget
{
public:
	class UOnlineSubsystemExtendedSteamWebBrowser* WebBrowser;                                        // 0x0240(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_248[0x30];                                     // 0x0248(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                M_Btn_Close;                                       // 0x0278(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_280[0x8];                                      // 0x0280(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void EnableCustomStyle(bool bEnable);
	void HandleOnUrlChanged(const class FText& Text);
	void OnClickClose();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineSubsystemExtendedSteamWidget">();
	}
	static class UOnlineSubsystemExtendedSteamWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineSubsystemExtendedSteamWidget>();
	}
};
static_assert(alignof(UOnlineSubsystemExtendedSteamWidget) == 0x000008, "Wrong alignment on UOnlineSubsystemExtendedSteamWidget");
static_assert(sizeof(UOnlineSubsystemExtendedSteamWidget) == 0x000288, "Wrong size on UOnlineSubsystemExtendedSteamWidget");
static_assert(offsetof(UOnlineSubsystemExtendedSteamWidget, WebBrowser) == 0x000240, "Member 'UOnlineSubsystemExtendedSteamWidget::WebBrowser' has a wrong offset!");
static_assert(offsetof(UOnlineSubsystemExtendedSteamWidget, M_Btn_Close) == 0x000278, "Member 'UOnlineSubsystemExtendedSteamWidget::M_Btn_Close' has a wrong offset!");

// Class OnlineSubsystemExtendedSteam.SteamLogin
// 0x0028 (0x0058 - 0x0030)
class USteamLogin final : public UBlueprintAsyncActionBase
{
public:
	UMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_             OnFail;                                            // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USteamLogin* SteamLogin();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SteamLogin">();
	}
	static class USteamLogin* GetDefaultObj()
	{
		return GetDefaultObjImpl<USteamLogin>();
	}
};
static_assert(alignof(USteamLogin) == 0x000008, "Wrong alignment on USteamLogin");
static_assert(sizeof(USteamLogin) == 0x000058, "Wrong size on USteamLogin");
static_assert(offsetof(USteamLogin, OnSuccess) == 0x000030, "Member 'USteamLogin::OnSuccess' has a wrong offset!");
static_assert(offsetof(USteamLogin, OnFail) == 0x000040, "Member 'USteamLogin::OnFail' has a wrong offset!");

}

