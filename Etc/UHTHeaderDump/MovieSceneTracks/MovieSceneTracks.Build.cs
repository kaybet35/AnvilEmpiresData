using UnrealBuildTool;

public class MovieSceneTracks : ModuleRules {
    public MovieSceneTracks(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "Constraints",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
        });
    }
}
