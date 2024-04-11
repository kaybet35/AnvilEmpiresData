using UnrealBuildTool;

public class ControlRig : ModuleRules {
    public ControlRig(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "AnimationCore",
            "Constraints",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "PropertyPath",
            "RigVM",
        });
    }
}
