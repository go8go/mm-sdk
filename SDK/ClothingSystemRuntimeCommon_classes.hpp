#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeCommon

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "ClothingSystemRuntimeInterface_structs.hpp"
#include "ClothingSystemRuntimeInterface_classes.hpp"


namespace SDK
{

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCustomData">();
	}
	static class UClothingAssetCustomData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCustomData>();
	}
};
static_assert(alignof(UClothingAssetCustomData) == 0x000008, "Wrong alignment on UClothingAssetCustomData");
static_assert(sizeof(UClothingAssetCustomData) == 0x000028, "Wrong size on UClothingAssetCustomData");

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x0060 (0x00A8 - 0x0048)
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                          PhysicsAsset;                                      // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothConfigBase*                       ClothSimConfig;                                    // 0x0050(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClothLODDataBase*>              ClothLODData;                                      // 0x0058(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 LodMap;                                            // 0x0068(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           UsedBoneNames;                                     // 0x0078(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 UsedBoneIndices;                                   // 0x0088(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         ReferenceBoneIndex;                                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClothingAssetCustomData*               CustomData;                                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCommon">();
	}
	static class UClothingAssetCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCommon>();
	}
};
static_assert(alignof(UClothingAssetCommon) == 0x000008, "Wrong alignment on UClothingAssetCommon");
static_assert(sizeof(UClothingAssetCommon) == 0x0000A8, "Wrong size on UClothingAssetCommon");
static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 0x000048, "Member 'UClothingAssetCommon::PhysicsAsset' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ClothSimConfig) == 0x000050, "Member 'UClothingAssetCommon::ClothSimConfig' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ClothLODData) == 0x000058, "Member 'UClothingAssetCommon::ClothLODData' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, LodMap) == 0x000068, "Member 'UClothingAssetCommon::LodMap' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 0x000078, "Member 'UClothingAssetCommon::UsedBoneNames' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 0x000088, "Member 'UClothingAssetCommon::UsedBoneIndices' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ReferenceBoneIndex) == 0x000098, "Member 'UClothingAssetCommon::ReferenceBoneIndex' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, CustomData) == 0x0000A0, "Member 'UClothingAssetCommon::CustomData' has a wrong offset!");

// Class ClothingSystemRuntimeCommon.ClothLODDataBase
// 0x0068 (0x0090 - 0x0028)
class UClothLODDataBase : public UObject
{
public:
	class UClothPhysicalMeshDataBase*             PhysicalMeshData;                                  // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothCollisionData                    CollisionData;                                     // 0x0030(0x0040)(Edit, NativeAccessSpecifierPublic)
	uint8                                         Pad_70[0x20];                                      // 0x0070(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothLODDataBase">();
	}
	static class UClothLODDataBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothLODDataBase>();
	}
};
static_assert(alignof(UClothLODDataBase) == 0x000008, "Wrong alignment on UClothLODDataBase");
static_assert(sizeof(UClothLODDataBase) == 0x000090, "Wrong size on UClothLODDataBase");
static_assert(offsetof(UClothLODDataBase, PhysicalMeshData) == 0x000028, "Member 'UClothLODDataBase::PhysicalMeshData' has a wrong offset!");
static_assert(offsetof(UClothLODDataBase, CollisionData) == 0x000030, "Member 'UClothLODDataBase::CollisionData' has a wrong offset!");

}

