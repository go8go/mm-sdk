#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WNGamePlugin

#include "Basic.hpp"

#include "WNGamePlugin_classes.hpp"
#include "WNGamePlugin_parameters.hpp"


namespace SDK
{

// Function WNGamePlugin.WNAndroidDeviceState.ConnectListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWNAndroidDeviceState*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWNAndroidDeviceState* UWNAndroidDeviceState::ConnectListener()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WNAndroidDeviceState", "ConnectListener");

	Params::WNAndroidDeviceState_ConnectListener Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WNGamePlugin.WNAndroidDeviceState.DisConnectListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWNAndroidDeviceState*            RemoveListener                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWNAndroidDeviceState::DisConnectListener(class UWNAndroidDeviceState* RemoveListener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WNAndroidDeviceState", "DisConnectListener");

	Params::WNAndroidDeviceState_DisConnectListener Parms{};

	Parms.RemoveListener = RemoveListener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

