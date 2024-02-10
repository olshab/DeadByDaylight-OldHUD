using UnrealBuildTool;

public class DBDAnimationBudgetAllocator : ModuleRules {
	public DBDAnimationBudgetAllocator(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AnimationBudgetAllocator",
			"AnimationUtilities",
			"Core",
			"CoreUObject",
			"Engine",
			"GameplayTags",
			"SignificanceUtilities",
		});
	}
}
