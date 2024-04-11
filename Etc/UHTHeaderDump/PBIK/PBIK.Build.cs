using UnrealBuildTool;

public class PBIK : ModuleRules {
    public PBIK(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
