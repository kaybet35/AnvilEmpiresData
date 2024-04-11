using UnrealBuildTool;

public class DatasmithContent : ModuleRules {
    public DatasmithContent(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "LevelSequence",
        });
    }
}
