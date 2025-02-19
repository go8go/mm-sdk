#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemExtendedGoogle

#include "Basic.hpp"


namespace SDK
{

// Enum OnlineSubsystemExtendedGoogle.EGoogleRequestMethod
// NumValues: 0x0003
enum class EGoogleRequestMethod : uint8
{
	GET                                      = 0,
	POST                                     = 1,
	EGoogleRequestMethod_MAX                 = 2,
};

// ScriptStruct OnlineSubsystemExtendedGoogle.GoogleProfile
// 0x0060 (0x0060 - 0x0000)
struct FGoogleProfile final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Email;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FullName;                                          // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GivenName;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FamilyName;                                        // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProfileURL;                                        // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGoogleProfile) == 0x000008, "Wrong alignment on FGoogleProfile");
static_assert(sizeof(FGoogleProfile) == 0x000060, "Wrong size on FGoogleProfile");
static_assert(offsetof(FGoogleProfile, ID) == 0x000000, "Member 'FGoogleProfile::ID' has a wrong offset!");
static_assert(offsetof(FGoogleProfile, Email) == 0x000010, "Member 'FGoogleProfile::Email' has a wrong offset!");
static_assert(offsetof(FGoogleProfile, FullName) == 0x000020, "Member 'FGoogleProfile::FullName' has a wrong offset!");
static_assert(offsetof(FGoogleProfile, GivenName) == 0x000030, "Member 'FGoogleProfile::GivenName' has a wrong offset!");
static_assert(offsetof(FGoogleProfile, FamilyName) == 0x000040, "Member 'FGoogleProfile::FamilyName' has a wrong offset!");
static_assert(offsetof(FGoogleProfile, ProfileURL) == 0x000050, "Member 'FGoogleProfile::ProfileURL' has a wrong offset!");

}

