// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReflection_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ObjectReflection;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ObjectReflection()
	{
		if (!Z_Registration_Info_UPackage__Script_ObjectReflection.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ObjectReflection",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8EF605D9,
				0x42F329E7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ObjectReflection.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ObjectReflection.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ObjectReflection(Z_Construct_UPackage__Script_ObjectReflection, TEXT("/Script/ObjectReflection"), Z_Registration_Info_UPackage__Script_ObjectReflection, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8EF605D9, 0x42F329E7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
