#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// 0x0014 (0x0014 - 0x0000)
struct FClothCollisionPrim_Sphere final
{
public:
	int32                                         BoneIndex;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocalPosition;                                     // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothCollisionPrim_Sphere) == 0x000004, "Wrong alignment on FClothCollisionPrim_Sphere");
static_assert(sizeof(FClothCollisionPrim_Sphere) == 0x000014, "Wrong size on FClothCollisionPrim_Sphere");
static_assert(offsetof(FClothCollisionPrim_Sphere, BoneIndex) == 0x000000, "Member 'FClothCollisionPrim_Sphere::BoneIndex' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Sphere, Radius) == 0x000004, "Member 'FClothCollisionPrim_Sphere::Radius' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Sphere, LocalPosition) == 0x000008, "Member 'FClothCollisionPrim_Sphere::LocalPosition' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// 0x001C (0x001C - 0x0000)
struct FClothCollisionPrim_Box final
{
public:
	int32                                         BoneIndex;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocalMin;                                          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocalMax;                                          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothCollisionPrim_Box) == 0x000004, "Wrong alignment on FClothCollisionPrim_Box");
static_assert(sizeof(FClothCollisionPrim_Box) == 0x00001C, "Wrong size on FClothCollisionPrim_Box");
static_assert(offsetof(FClothCollisionPrim_Box, BoneIndex) == 0x000000, "Member 'FClothCollisionPrim_Box::BoneIndex' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Box, LocalMin) == 0x000004, "Member 'FClothCollisionPrim_Box::LocalMin' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Box, LocalMax) == 0x000010, "Member 'FClothCollisionPrim_Box::LocalMax' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// 0x0008 (0x0008 - 0x0000)
struct FClothCollisionPrim_SphereConnection final
{
public:
	int32                                         SphereIndices[0x2];                                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothCollisionPrim_SphereConnection) == 0x000004, "Wrong alignment on FClothCollisionPrim_SphereConnection");
static_assert(sizeof(FClothCollisionPrim_SphereConnection) == 0x000008, "Wrong size on FClothCollisionPrim_SphereConnection");
static_assert(offsetof(FClothCollisionPrim_SphereConnection, SphereIndices) == 0x000000, "Member 'FClothCollisionPrim_SphereConnection::SphereIndices' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// 0x0018 (0x0018 - 0x0000)
struct FClothCollisionPrim_Convex final
{
public:
	TArray<struct FPlane>                         Planes;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         BoneIndex;                                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FClothCollisionPrim_Convex) == 0x000008, "Wrong alignment on FClothCollisionPrim_Convex");
static_assert(sizeof(FClothCollisionPrim_Convex) == 0x000018, "Wrong size on FClothCollisionPrim_Convex");
static_assert(offsetof(FClothCollisionPrim_Convex, Planes) == 0x000000, "Member 'FClothCollisionPrim_Convex::Planes' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Convex, BoneIndex) == 0x000010, "Member 'FClothCollisionPrim_Convex::BoneIndex' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// 0x0040 (0x0040 - 0x0000)
struct FClothCollisionData final
{
public:
	TArray<struct FClothCollisionPrim_Sphere>     Spheres;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                 // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothCollisionPrim_Convex>     Convexes;                                          // 0x0020(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothCollisionPrim_Box>        Boxes;                                             // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothCollisionData) == 0x000008, "Wrong alignment on FClothCollisionData");
static_assert(sizeof(FClothCollisionData) == 0x000040, "Wrong size on FClothCollisionData");
static_assert(offsetof(FClothCollisionData, Spheres) == 0x000000, "Member 'FClothCollisionData::Spheres' has a wrong offset!");
static_assert(offsetof(FClothCollisionData, SphereConnections) == 0x000010, "Member 'FClothCollisionData::SphereConnections' has a wrong offset!");
static_assert(offsetof(FClothCollisionData, Convexes) == 0x000020, "Member 'FClothCollisionData::Convexes' has a wrong offset!");
static_assert(offsetof(FClothCollisionData, Boxes) == 0x000030, "Member 'FClothCollisionData::Boxes' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeInterface.PointWeightMap
// 0x0028 (0x0028 - 0x0000)
struct FPointWeightMap final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         CurrentTarget;                                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 Values;                                            // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPointWeightMap) == 0x000008, "Wrong alignment on FPointWeightMap");
static_assert(sizeof(FPointWeightMap) == 0x000028, "Wrong size on FPointWeightMap");
static_assert(offsetof(FPointWeightMap, Name) == 0x000000, "Member 'FPointWeightMap::Name' has a wrong offset!");
static_assert(offsetof(FPointWeightMap, CurrentTarget) == 0x000008, "Member 'FPointWeightMap::CurrentTarget' has a wrong offset!");
static_assert(offsetof(FPointWeightMap, Values) == 0x000010, "Member 'FPointWeightMap::Values' has a wrong offset!");
static_assert(offsetof(FPointWeightMap, bEnabled) == 0x000020, "Member 'FPointWeightMap::bEnabled' has a wrong offset!");

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// 0x0034 (0x0034 - 0x0000)
struct FClothVertBoneData final
{
public:
	int32                                         NumInfluences;                                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        BoneIndices[0x8];                                  // 0x0004(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BoneWeights[0x8];                                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothVertBoneData) == 0x000004, "Wrong alignment on FClothVertBoneData");
static_assert(sizeof(FClothVertBoneData) == 0x000034, "Wrong size on FClothVertBoneData");
static_assert(offsetof(FClothVertBoneData, NumInfluences) == 0x000000, "Member 'FClothVertBoneData::NumInfluences' has a wrong offset!");
static_assert(offsetof(FClothVertBoneData, BoneIndices) == 0x000004, "Member 'FClothVertBoneData::BoneIndices' has a wrong offset!");
static_assert(offsetof(FClothVertBoneData, BoneWeights) == 0x000014, "Member 'FClothVertBoneData::BoneWeights' has a wrong offset!");

}

