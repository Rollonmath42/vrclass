// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VRClass : ModuleRules
{
	public VRClass(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "Http", "Json", "JsonUtilities", "OpenSSL", 
			"OnlineSubsystem", "OnlineSubsystemNull", "OnlineSubsystemUtils" });
		
		PrivateDependencyModuleNames.AddRange(new string[] {});
		PrivateDependencyModuleNames.Add("OnlineSubsystem");
		PrivateDependencyModuleNames.Add("OnlineSubsystemNull");
	}
}
