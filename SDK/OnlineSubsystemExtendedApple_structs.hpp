#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemExtendedApple

#include "Basic.hpp"


namespace SDK
{

// Enum OnlineSubsystemExtendedApple.EAppleRequestMethod
// NumValues: 0x0003
enum class EAppleRequestMethod : uint8
{
	GET                                      = 0,
	POST                                     = 1,
	EAppleRequestMethod_MAX                  = 2,
};

// ScriptStruct OnlineSubsystemExtendedApple.AppleProfile
// 0x0060 (0x0060 - 0x0000)
struct FAppleProfile final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Email;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FullName;                                          // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GivenName;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FamilyName;                                        // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProfileURL;                                        // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAppleProfile) == 0x000008, "Wrong alignment on FAppleProfile");
static_assert(sizeof(FAppleProfile) == 0x000060, "Wrong size on FAppleProfile");
static_assert(offsetof(FAppleProfile, ID) == 0x000000, "Member 'FAppleProfile::ID' has a wrong offset!");
static_assert(offsetof(FAppleProfile, Email) == 0x000010, "Member 'FAppleProfile::Email' has a wrong offset!");
static_assert(offsetof(FAppleProfile, FullName) == 0x000020, "Member 'FAppleProfile::FullName' has a wrong offset!");
static_assert(offsetof(FAppleProfile, GivenName) == 0x000030, "Member 'FAppleProfile::GivenName' has a wrong offset!");
static_assert(offsetof(FAppleProfile, FamilyName) == 0x000040, "Member 'FAppleProfile::FamilyName' has a wrong offset!");
static_assert(offsetof(FAppleProfile, ProfileURL) == 0x000050, "Member 'FAppleProfile::ProfileURL' has a wrong offset!");

}

