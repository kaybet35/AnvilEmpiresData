using UnrealBuildTool;

public class MovieRenderPipelineRenderPasses : ModuleRules {
    public MovieRenderPipelineRenderPasses(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ActorLayerUtilities",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieRenderPipelineCore",
        });
    }
}
