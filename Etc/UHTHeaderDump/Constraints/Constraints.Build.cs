using UnrealBuildTool;

public class Constraints : ModuleRules {
    public Constraints(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimationCore",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
        });
    }
}
