using UnrealBuildTool;

public class Anvil : ModuleRules {
    public Anvil(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CableComponent",
            "Core",
            "CoreUObject",
            "Engine",
            "Landscape",
            "Niagara",
            "R2",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
