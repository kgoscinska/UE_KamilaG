// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_KamilaG : ModuleRules
{
	public UE_KamilaG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UE_KamilaG",
			"UE_KamilaG/Variant_Platforming",
			"UE_KamilaG/Variant_Platforming/Animation",
			"UE_KamilaG/Variant_Combat",
			"UE_KamilaG/Variant_Combat/AI",
			"UE_KamilaG/Variant_Combat/Animation",
			"UE_KamilaG/Variant_Combat/Gameplay",
			"UE_KamilaG/Variant_Combat/Interfaces",
			"UE_KamilaG/Variant_Combat/UI",
			"UE_KamilaG/Variant_SideScrolling",
			"UE_KamilaG/Variant_SideScrolling/AI",
			"UE_KamilaG/Variant_SideScrolling/Gameplay",
			"UE_KamilaG/Variant_SideScrolling/Interfaces",
			"UE_KamilaG/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
