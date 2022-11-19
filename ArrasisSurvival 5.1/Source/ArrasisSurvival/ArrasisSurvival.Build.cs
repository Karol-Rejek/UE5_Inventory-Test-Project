// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ArrasisSurvival : ModuleRules
{
	public ArrasisSurvival(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
