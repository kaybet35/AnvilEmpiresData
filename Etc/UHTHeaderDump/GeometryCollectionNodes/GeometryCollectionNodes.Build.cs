using UnrealBuildTool;

public class GeometryCollectionNodes : ModuleRules {
    public GeometryCollectionNodes(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "Core",
            "CoreUObject",
            "DataflowCore",
            "Engine",
        });
    }
}
