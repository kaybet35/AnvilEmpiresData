using UnrealBuildTool;

public class MovieRenderPipelineCore : ModuleRules {
    public MovieRenderPipelineCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "LevelSequence",
            "MovieScene",
            "OpenColorIO",
            "UMG",
        });
    }
}
