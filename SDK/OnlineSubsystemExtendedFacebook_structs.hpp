#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemExtendedFacebook

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum OnlineSubsystemExtendedFacebook.EFacebookRequestMethod
// NumValues: 0x0003
enum class EFacebookRequestMethod : uint8
{
	GET                                      = 0,
	POST                                     = 1,
	EFacebookRequestMethod_MAX               = 2,
};

// Enum OnlineSubsystemExtendedFacebook.EFacebookImageFormat
// NumValues: 0x0007
enum class EFacebookImageFormat : uint8
{
	JPG                                      = 0,
	PNG                                      = 1,
	BMP                                      = 2,
	ICO                                      = 3,
	EXR                                      = 4,
	ICNS                                     = 5,
	EFacebookImageFormat_MAX                 = 6,
};

// Enum OnlineSubsystemExtendedFacebook.EPermissionsPrivacy
// NumValues: 0x0004
enum class EPermissionsPrivacy : uint8
{
	OnlyMe                                   = 0,
	OnlyFriends                              = 1,
	Everyone                                 = 2,
	EPermissionsPrivacy_MAX                  = 3,
};

// ScriptStruct OnlineSubsystemExtendedFacebook.FacebookAchievement
// 0x0038 (0x0038 - 0x0000)
struct FFacebookAchievement final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Title;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 URL;                                               // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              UnlockTime;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFacebookAchievement) == 0x000008, "Wrong alignment on FFacebookAchievement");
static_assert(sizeof(FFacebookAchievement) == 0x000038, "Wrong size on FFacebookAchievement");
static_assert(offsetof(FFacebookAchievement, ID) == 0x000000, "Member 'FFacebookAchievement::ID' has a wrong offset!");
static_assert(offsetof(FFacebookAchievement, Title) == 0x000010, "Member 'FFacebookAchievement::Title' has a wrong offset!");
static_assert(offsetof(FFacebookAchievement, URL) == 0x000020, "Member 'FFacebookAchievement::URL' has a wrong offset!");
static_assert(offsetof(FFacebookAchievement, UnlockTime) == 0x000030, "Member 'FFacebookAchievement::UnlockTime' has a wrong offset!");

// ScriptStruct OnlineSubsystemExtendedFacebook.FacebookFriend
// 0x0030 (0x0030 - 0x0000)
struct FFacebookFriend final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AvatarURL;                                         // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFacebookFriend) == 0x000008, "Wrong alignment on FFacebookFriend");
static_assert(sizeof(FFacebookFriend) == 0x000030, "Wrong size on FFacebookFriend");
static_assert(offsetof(FFacebookFriend, ID) == 0x000000, "Member 'FFacebookFriend::ID' has a wrong offset!");
static_assert(offsetof(FFacebookFriend, Name) == 0x000010, "Member 'FFacebookFriend::Name' has a wrong offset!");
static_assert(offsetof(FFacebookFriend, AvatarURL) == 0x000020, "Member 'FFacebookFriend::AvatarURL' has a wrong offset!");

// ScriptStruct OnlineSubsystemExtendedFacebook.FacebookSharePhotoContent
// 0x0010 (0x0010 - 0x0000)
struct FFacebookSharePhotoContent final
{
public:
	class UTexture2D*                             Image;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFacebookImageFormat                          ImageFormat;                                       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFacebookSharePhotoContent) == 0x000008, "Wrong alignment on FFacebookSharePhotoContent");
static_assert(sizeof(FFacebookSharePhotoContent) == 0x000010, "Wrong size on FFacebookSharePhotoContent");
static_assert(offsetof(FFacebookSharePhotoContent, Image) == 0x000000, "Member 'FFacebookSharePhotoContent::Image' has a wrong offset!");
static_assert(offsetof(FFacebookSharePhotoContent, ImageFormat) == 0x000008, "Member 'FFacebookSharePhotoContent::ImageFormat' has a wrong offset!");

// ScriptStruct OnlineSubsystemExtendedFacebook.FacebookOpenGraphParameter
// 0x0020 (0x0020 - 0x0000)
struct FFacebookOpenGraphParameter final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFacebookOpenGraphParameter) == 0x000008, "Wrong alignment on FFacebookOpenGraphParameter");
static_assert(sizeof(FFacebookOpenGraphParameter) == 0x000020, "Wrong size on FFacebookOpenGraphParameter");
static_assert(offsetof(FFacebookOpenGraphParameter, Key) == 0x000000, "Member 'FFacebookOpenGraphParameter::Key' has a wrong offset!");
static_assert(offsetof(FFacebookOpenGraphParameter, Value) == 0x000010, "Member 'FFacebookOpenGraphParameter::Value' has a wrong offset!");

// ScriptStruct OnlineSubsystemExtendedFacebook.FacebookLeaderboard
// 0x0028 (0x0028 - 0x0000)
struct FFacebookLeaderboard final
{
public:
	class FString                                 UserID;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Username;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Score;                                             // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFacebookLeaderboard) == 0x000008, "Wrong alignment on FFacebookLeaderboard");
static_assert(sizeof(FFacebookLeaderboard) == 0x000028, "Wrong size on FFacebookLeaderboard");
static_assert(offsetof(FFacebookLeaderboard, UserID) == 0x000000, "Member 'FFacebookLeaderboard::UserID' has a wrong offset!");
static_assert(offsetof(FFacebookLeaderboard, Username) == 0x000010, "Member 'FFacebookLeaderboard::Username' has a wrong offset!");
static_assert(offsetof(FFacebookLeaderboard, Score) == 0x000020, "Member 'FFacebookLeaderboard::Score' has a wrong offset!");

// ScriptStruct OnlineSubsystemExtendedFacebook.FacebookShareLinkContent
// 0x0010 (0x0010 - 0x0000)
struct FFacebookShareLinkContent final
{
public:
	class FString                                 ContentURL;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFacebookShareLinkContent) == 0x000008, "Wrong alignment on FFacebookShareLinkContent");
static_assert(sizeof(FFacebookShareLinkContent) == 0x000010, "Wrong size on FFacebookShareLinkContent");
static_assert(offsetof(FFacebookShareLinkContent, ContentURL) == 0x000000, "Member 'FFacebookShareLinkContent::ContentURL' has a wrong offset!");

// ScriptStruct OnlineSubsystemExtendedFacebook.FacebookHometown
// 0x0020 (0x0020 - 0x0000)
struct FFacebookHometown final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFacebookHometown) == 0x000008, "Wrong alignment on FFacebookHometown");
static_assert(sizeof(FFacebookHometown) == 0x000020, "Wrong size on FFacebookHometown");
static_assert(offsetof(FFacebookHometown, ID) == 0x000000, "Member 'FFacebookHometown::ID' has a wrong offset!");
static_assert(offsetof(FFacebookHometown, Name) == 0x000010, "Member 'FFacebookHometown::Name' has a wrong offset!");

// ScriptStruct OnlineSubsystemExtendedFacebook.FacebookProfile
// 0x00C0 (0x00C0 - 0x0000)
struct FFacebookProfile final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Birthday;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Email;                                             // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FirstName;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MiddleName;                                        // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LastName;                                          // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Gender;                                            // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFacebookHometown                      Hometown;                                          // 0x0080(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                 ProfileURL;                                        // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AvatarURL;                                         // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFacebookProfile) == 0x000008, "Wrong alignment on FFacebookProfile");
static_assert(sizeof(FFacebookProfile) == 0x0000C0, "Wrong size on FFacebookProfile");
static_assert(offsetof(FFacebookProfile, ID) == 0x000000, "Member 'FFacebookProfile::ID' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, Birthday) == 0x000010, "Member 'FFacebookProfile::Birthday' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, Email) == 0x000020, "Member 'FFacebookProfile::Email' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, FirstName) == 0x000030, "Member 'FFacebookProfile::FirstName' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, MiddleName) == 0x000040, "Member 'FFacebookProfile::MiddleName' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, LastName) == 0x000050, "Member 'FFacebookProfile::LastName' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, Name) == 0x000060, "Member 'FFacebookProfile::Name' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, Gender) == 0x000070, "Member 'FFacebookProfile::Gender' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, Hometown) == 0x000080, "Member 'FFacebookProfile::Hometown' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, ProfileURL) == 0x0000A0, "Member 'FFacebookProfile::ProfileURL' has a wrong offset!");
static_assert(offsetof(FFacebookProfile, AvatarURL) == 0x0000B0, "Member 'FFacebookProfile::AvatarURL' has a wrong offset!");

}

