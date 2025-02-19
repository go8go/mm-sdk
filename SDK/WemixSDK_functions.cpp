#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WemixSDK

#include "Basic.hpp"

#include "WemixSDK_classes.hpp"
#include "WemixSDK_parameters.hpp"


namespace SDK
{

// Function WemixSDK.WemixSDKBPLibrary.WemixSDKSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Param                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWemixSDKBPLibrary::WemixSDKSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WemixSDKBPLibrary", "WemixSDKSampleFunction");

	Params::WemixSDKBPLibrary_WemixSDKSampleFunction Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WemixSDK.WemixWebBrowser.UnrealSendMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Name_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Body                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowser::UnrealSendMessage(const class FString& Name_0, const class FString& Body)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("WemixWebBrowser", "UnrealSendMessage");

	Params::WemixWebBrowser_UnrealSendMessage Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Body = std::move(Body);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowser.BindUObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Name_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsPermanent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowser::BindUObject(const class FString& Name_0, class UObject* Object, bool bIsPermanent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "BindUObject");

	Params::WemixWebBrowser_BindUObject Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Object = Object;
	Parms.bIsPermanent = bIsPermanent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowser.ExecuteJavascript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ScriptText                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowser::ExecuteJavascript(const class FString& ScriptText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "ExecuteJavascript");

	Params::WemixWebBrowser_ExecuteJavascript Parms{};

	Parms.ScriptText = std::move(ScriptText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowser.LoadString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Contents                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           DummyURL                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowser::LoadString(const class FString& Contents, const class FString& DummyURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "LoadString");

	Params::WemixWebBrowser_LoadString Parms{};

	Parms.Contents = std::move(Contents);
	Parms.DummyURL = std::move(DummyURL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowser.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           NewURL                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowser::LoadURL(const class FString& NewURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "LoadURL");

	Params::WemixWebBrowser_LoadURL Parms{};

	Parms.NewURL = std::move(NewURL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction WemixSDK.WemixWebBrowser.OnBeforePopup__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                           URL                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Frame                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowser::OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "OnBeforePopup__DelegateSignature");

	Params::WemixWebBrowser_OnBeforePopup__DelegateSignature Parms{};

	Parms.URL = std::move(URL);
	Parms.Frame = std::move(Frame);

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction WemixSDK.WemixWebBrowser.OnConsoleMessage__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                           Message                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Source                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Line                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowser::OnConsoleMessage__DelegateSignature(const class FString& Message, const class FString& Source, int32 Line)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "OnConsoleMessage__DelegateSignature");

	Params::WemixWebBrowser_OnConsoleMessage__DelegateSignature Parms{};

	Parms.Message = std::move(Message);
	Parms.Source = std::move(Source);
	Parms.Line = Line;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction WemixSDK.WemixWebBrowser.OnUrlChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                             Text                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UWemixWebBrowser::OnUrlChanged__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "OnUrlChanged__DelegateSignature");

	Params::WemixWebBrowser_OnUrlChanged__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WemixSDK.WemixWebBrowser.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UWemixWebBrowser::GetTitleText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "GetTitleText");

	Params::WemixWebBrowser_GetTitleText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WemixSDK.WemixWebBrowser.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWemixWebBrowser::GetUrl() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowser", "GetUrl");

	Params::WemixWebBrowser_GetUrl Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WemixSDK.WemixWebBrowserWidget.GetSignMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWemixWebBrowserWidget::GetSignMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "GetSignMessage");

	Params::WemixWebBrowserWidget_GetSignMessage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WemixSDK.WemixWebBrowserWidget.GetWebBaseUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWemixWebBrowserWidget::GetWebBaseUrl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "GetWebBaseUrl");

	Params::WemixWebBrowserWidget_GetWebBaseUrl Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WemixSDK.WemixWebBrowserWidget.GetWemixHost
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UWemixWebBrowserWidget::GetWemixHost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "GetWemixHost");

	Params::WemixWebBrowserWidget_GetWemixHost Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WemixSDK.WemixWebBrowserWidget.IsDarkMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWemixWebBrowserWidget::IsDarkMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "IsDarkMode");

	Params::WemixWebBrowserWidget_IsDarkMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function WemixSDK.WemixWebBrowserWidget.OnCancel
// (Final, Native, Public, BlueprintCallable)

void UWemixWebBrowserWidget::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "OnCancel");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowserWidget.OnDisconnectEvent
// (Final, Native, Public, BlueprintCallable)

void UWemixWebBrowserWidget::OnDisconnectEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "OnDisconnectEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowserWidget.OnFailedConnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Error                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowserWidget::OnFailedConnect(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "OnFailedConnect");

	Params::WemixWebBrowserWidget_OnFailedConnect Parms{};

	Parms.Error = std::move(Error);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowserWidget.OnFailedSign
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Error                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowserWidget::OnFailedSign(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "OnFailedSign");

	Params::WemixWebBrowserWidget_OnFailedSign Parms{};

	Parms.Error = std::move(Error);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowserWidget.OnSuccessConnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Data                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowserWidget::OnSuccessConnect(const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "OnSuccessConnect");

	Params::WemixWebBrowserWidget_OnSuccessConnect Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowserWidget.OnSuccessForcedDisconnect
// (Final, Native, Public, BlueprintCallable)

void UWemixWebBrowserWidget::OnSuccessForcedDisconnect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "OnSuccessForcedDisconnect");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function WemixSDK.WemixWebBrowserWidget.OnSuccessSign
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Data                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWemixWebBrowserWidget::OnSuccessSign(const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WemixWebBrowserWidget", "OnSuccessSign");

	Params::WemixWebBrowserWidget_OnSuccessSign Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

