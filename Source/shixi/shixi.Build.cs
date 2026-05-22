// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class shixi : ModuleRules
{
	public shixi(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
