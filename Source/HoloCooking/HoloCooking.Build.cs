// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HoloCooking : ModuleRules
{
	public HoloCooking(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
