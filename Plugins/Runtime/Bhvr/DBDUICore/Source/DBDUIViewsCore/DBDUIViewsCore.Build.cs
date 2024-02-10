using UnrealBuildTool;

public class DBDUIViewsCore : ModuleRules {
	public DBDUIViewsCore(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AkAudio",
			"BinkMediaPlayer",
			"Core",
			"CoreCommonUIUtils",
			"CoreUObject",
			"DBDInput",
			"DBDSharedTypes",
			"DBDUIManagers",
			"DBDUIViewInterfaces",
			"DataTableUtilities",
			"Engine",
			"GameplayTags",
			"InputCore",
			"InputUtilities",
			"MediaAssets",
			"MovieScene",
			"PhysicsCore",
			"RemoteContentCache",
			"Slate",
			"SlateCore",
			"UITween",
			"UMG",
		});
	}
}
