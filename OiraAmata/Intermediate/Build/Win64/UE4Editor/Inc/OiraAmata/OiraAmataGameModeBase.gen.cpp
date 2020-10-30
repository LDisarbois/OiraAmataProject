// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OiraAmata/OiraAmataGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOiraAmataGameModeBase() {}
// Cross Module References
	OIRAAMATA_API UClass* Z_Construct_UClass_AOiraAmataGameModeBase_NoRegister();
	OIRAAMATA_API UClass* Z_Construct_UClass_AOiraAmataGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OiraAmata();
// End Cross Module References
	void AOiraAmataGameModeBase::StaticRegisterNativesAOiraAmataGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOiraAmataGameModeBase_NoRegister()
	{
		return AOiraAmataGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOiraAmataGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOiraAmataGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OiraAmata,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOiraAmataGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OiraAmataGameModeBase.h" },
		{ "ModuleRelativePath", "OiraAmataGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOiraAmataGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOiraAmataGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOiraAmataGameModeBase_Statics::ClassParams = {
		&AOiraAmataGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOiraAmataGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOiraAmataGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOiraAmataGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOiraAmataGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOiraAmataGameModeBase, 2062389753);
	template<> OIRAAMATA_API UClass* StaticClass<AOiraAmataGameModeBase>()
	{
		return AOiraAmataGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOiraAmataGameModeBase(Z_Construct_UClass_AOiraAmataGameModeBase, &AOiraAmataGameModeBase::StaticClass, TEXT("/Script/OiraAmata"), TEXT("AOiraAmataGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOiraAmataGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
