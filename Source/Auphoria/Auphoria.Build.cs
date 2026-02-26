// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Auphoria : ModuleRules
{
	public Auphoria(ReadOnlyTargetRules Target) : base(Target)
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
			"Auphoria",
			"Auphoria/Variant_Platforming",
			"Auphoria/Variant_Platforming/Animation",
			"Auphoria/Variant_Combat",
			"Auphoria/Variant_Combat/AI",
			"Auphoria/Variant_Combat/Animation",
			"Auphoria/Variant_Combat/Gameplay",
			"Auphoria/Variant_Combat/Interfaces",
			"Auphoria/Variant_Combat/UI",
			"Auphoria/Variant_SideScrolling",
			"Auphoria/Variant_SideScrolling/AI",
			"Auphoria/Variant_SideScrolling/Gameplay",
			"Auphoria/Variant_SideScrolling/Interfaces",
			"Auphoria/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
