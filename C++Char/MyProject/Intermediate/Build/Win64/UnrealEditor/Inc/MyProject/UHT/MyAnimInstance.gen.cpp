// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UMyAnimInstance();
MYPROJECT_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class UMyAnimInstance Function AnimNotify_HelloWorldCpp
struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics
{
	struct MyAnimInstance_eventAnimNotify_HelloWorldCpp_Parms
	{
		const UAnimNotify* Notify;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//skeleton animnotify -> skeleton \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "skeleton animnotify -> skeleton \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Notify;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::NewProp_Notify = { "Notify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyAnimInstance_eventAnimNotify_HelloWorldCpp_Parms, Notify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::NewProp_Notify,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_HelloWorldCpp", nullptr, nullptr, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::MyAnimInstance_eventAnimNotify_HelloWorldCpp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::MyAnimInstance_eventAnimNotify_HelloWorldCpp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_HelloWorldCpp)
{
	P_GET_OBJECT(UAnimNotify,Z_Param_Notify);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_HelloWorldCpp(Z_Param_Notify);
	P_NATIVE_END;
}
// End Class UMyAnimInstance Function AnimNotify_HelloWorldCpp

// Begin Class UMyAnimInstance
void UMyAnimInstance::StaticRegisterNativesUMyAnimInstance()
{
	UClass* Class = UMyAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_HelloWorldCpp", &UMyAnimInstance::execAnimNotify_HelloWorldCpp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAnimInstance);
UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister()
{
	return UMyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyAnimInstance.h" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//crouch on off\n" },
#endif
		{ "ModuleRelativePath", "MyAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "crouch on off" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFire_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftLean_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightLean_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpineAngle_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpineAngle_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimYaw_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimPitch_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsCrouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static void NewProp_bIsFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFire;
	static void NewProp_bIsLeftLean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftLean;
	static void NewProp_bIsRightLean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightLean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSpineAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpineAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_HelloWorldCpp, "AnimNotify_HelloWorldCpp" }, // 1396950180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
{
	((UMyAnimInstance*)Obj)->bIsCrouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouched_MetaData), NewProp_bIsCrouched_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsFire_SetBit(void* Obj)
{
	((UMyAnimInstance*)Obj)->bIsFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsFire = { "bIsFire", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFire_MetaData), NewProp_bIsFire_MetaData) };
void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsLeftLean_SetBit(void* Obj)
{
	((UMyAnimInstance*)Obj)->bIsLeftLean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsLeftLean = { "bIsLeftLean", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsLeftLean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLeftLean_MetaData), NewProp_bIsLeftLean_MetaData) };
void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsRightLean_SetBit(void* Obj)
{
	((UMyAnimInstance*)Obj)->bIsRightLean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsRightLean = { "bIsRightLean", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsRightLean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRightLean_MetaData), NewProp_bIsRightLean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_TargetSpineAngle = { "TargetSpineAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, TargetSpineAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpineAngle_MetaData), NewProp_TargetSpineAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_CurrentSpineAngle = { "CurrentSpineAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, CurrentSpineAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpineAngle_MetaData), NewProp_CurrentSpineAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_AimYaw = { "AimYaw", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, AimYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimYaw_MetaData), NewProp_AimYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_AimPitch = { "AimPitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, AimPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimPitch_MetaData), NewProp_AimPitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsCrouched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsLeftLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_bIsRightLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_TargetSpineAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_CurrentSpineAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_AimYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp_AimPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams = {
	&UMyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton, Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<UMyAnimInstance>()
{
	return UMyAnimInstance::StaticClass();
}
UMyAnimInstance::UMyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimInstance);
UMyAnimInstance::~UMyAnimInstance() {}
// End Class UMyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C_Pro_C__Char_MyProject_Source_MyProject_MyAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimInstance, UMyAnimInstance::StaticClass, TEXT("UMyAnimInstance"), &Z_Registration_Info_UClass_UMyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimInstance), 2149153188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C_Pro_C__Char_MyProject_Source_MyProject_MyAnimInstance_h_2480384996(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_C___C_Pro_C__Char_MyProject_Source_MyProject_MyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C_Pro_C__Char_MyProject_Source_MyProject_MyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
