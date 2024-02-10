using UnrealBuildTool;

public class DBDVideoPlayer : ModuleRules {
	public DBDVideoPlayer(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"DataTableUtilities",
			"Engine",
			"MediaAssets",
			"UMG",
		});
	}
}
