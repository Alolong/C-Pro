// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AMyCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class AMyCharacter
void AMyCharacter::StaticRegisterNativesAMyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
{
	return AMyCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//TObjectPtr<> - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc <\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd> \n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nTObjectPtr<> - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc <\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Zoom_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Jump_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Crouch_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Fire_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd1\xb1\xef\xbf\xbd \xef\xbf\xbd\xc2\xbf\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd1\xb1\xef\xbf\xbd \xef\xbf\xbd\xc2\xbf\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_RightLean_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_LeftLean_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Default_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//IMC\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AM_Reload_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AM_Hit_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFire_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftLean_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightLean_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Zoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Crouch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Fire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_RightLean;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_LeftLean;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_Default;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AM_Reload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AM_Hit;
	static void NewProp_bIsFire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFire;
	static void NewProp_bIsLeftLean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftLean;
	static void NewProp_bIsRightLean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightLean;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Zoom = { "IA_Zoom", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IA_Zoom), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Zoom_MetaData), NewProp_IA_Zoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Jump = { "IA_Jump", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IA_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Jump_MetaData), NewProp_IA_Jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Crouch = { "IA_Crouch", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IA_Crouch), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Crouch_MetaData), NewProp_IA_Crouch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Fire = { "IA_Fire", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IA_Fire), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Fire_MetaData), NewProp_IA_Fire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_RightLean = { "IA_RightLean", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IA_RightLean), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_RightLean_MetaData), NewProp_IA_RightLean_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_LeftLean = { "IA_LeftLean", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IA_LeftLean), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_LeftLean_MetaData), NewProp_IA_LeftLean_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_IMC_Default = { "IMC_Default", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, IMC_Default), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_Default_MetaData), NewProp_IMC_Default_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AM_Reload = { "AM_Reload", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, AM_Reload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AM_Reload_MetaData), NewProp_AM_Reload_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_AM_Hit = { "AM_Hit", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, AM_Hit), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AM_Hit_MetaData), NewProp_AM_Hit_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsFire_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->bIsFire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsFire = { "bIsFire", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFire_MetaData), NewProp_bIsFire_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsLeftLean_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->bIsLeftLean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsLeftLean = { "bIsLeftLean", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsLeftLean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLeftLean_MetaData), NewProp_bIsLeftLean_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsRightLean_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->bIsRightLean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsRightLean = { "bIsRightLean", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsRightLean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRightLean_MetaData), NewProp_bIsRightLean_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Zoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Crouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_Fire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_RightLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IA_LeftLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_IMC_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AM_Reload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_AM_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsLeftLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bIsRightLean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
	&AMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<AMyCharacter>()
{
	return AMyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
AMyCharacter::~AMyCharacter() {}
// End Class AMyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C_Pro_C__Char_MyProject_Source_MyProject_MyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 3141173826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C_Pro_C__Char_MyProject_Source_MyProject_MyCharacter_h_940914865(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_C___C_Pro_C__Char_MyProject_Source_MyProject_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C_Pro_C__Char_MyProject_Source_MyProject_MyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
