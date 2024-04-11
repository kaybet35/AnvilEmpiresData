#ifndef UE4SS_SDK_GLTFExporter_HPP
#define UE4SS_SDK_GLTFExporter_HPP

#include "GLTFExporter_enums.hpp"

struct FGLTFExportMessages
{
    TArray<FString> Suggestions;                                                      // 0x0000 (size: 0x10)
    TArray<FString> Warnings;                                                         // 0x0010 (size: 0x10)
    TArray<FString> Errors;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGLTFOverrideMaterialBakeSettings
{
    bool bOverrideSize;                                                               // 0x0000 (size: 0x1)
    EGLTFMaterialBakeSizePOT Size;                                                    // 0x0001 (size: 0x1)
    bool bOverrideFilter;                                                             // 0x0002 (size: 0x1)
    TEnumAsByte<TextureFilter> Filter;                                                // 0x0003 (size: 0x1)
    bool bOverrideTiling;                                                             // 0x0004 (size: 0x1)
    TEnumAsByte<TextureAddress> Tiling;                                               // 0x0005 (size: 0x1)

}; // Size: 0x6

class UGLTFAnimSequenceExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFExportOptions : public UObject
{
    float ExportUniformScale;                                                         // 0x0028 (size: 0x4)
    bool bExportPreviewMesh;                                                          // 0x002C (size: 0x1)
    bool bStrictCompliance;                                                           // 0x002D (size: 0x1)
    bool bSkipNearDefaultValues;                                                      // 0x002E (size: 0x1)
    bool bIncludeGeneratorVersion;                                                    // 0x002F (size: 0x1)
    bool bExportProxyMaterials;                                                       // 0x0030 (size: 0x1)
    bool bExportUnlitMaterials;                                                       // 0x0031 (size: 0x1)
    bool bExportClearCoatMaterials;                                                   // 0x0032 (size: 0x1)
    bool bExportExtraBlendModes;                                                      // 0x0033 (size: 0x1)
    EGLTFMaterialBakeMode BakeMaterialInputs;                                         // 0x0034 (size: 0x1)
    EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize;                                 // 0x0035 (size: 0x1)
    TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter;                             // 0x0036 (size: 0x1)
    TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling;                            // 0x0037 (size: 0x1)
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x0038 (size: 0x50)
    int32 DefaultLevelOfDetail;                                                       // 0x0088 (size: 0x4)
    bool bExportVertexColors;                                                         // 0x008C (size: 0x1)
    bool bExportVertexSkinWeights;                                                    // 0x008D (size: 0x1)
    bool bUseMeshQuantization;                                                        // 0x008E (size: 0x1)
    bool bExportLevelSequences;                                                       // 0x008F (size: 0x1)
    bool bExportAnimationSequences;                                                   // 0x0090 (size: 0x1)
    bool bExportPlaybackSettings;                                                     // 0x0091 (size: 0x1)
    EGLTFTextureImageFormat TextureImageFormat;                                       // 0x0092 (size: 0x1)
    int32 TextureImageQuality;                                                        // 0x0094 (size: 0x4)
    int32 NoLossyImageFormatFor;                                                      // 0x0098 (size: 0x4)
    bool bExportTextureTransforms;                                                    // 0x009C (size: 0x1)
    bool bExportLightmaps;                                                            // 0x009D (size: 0x1)
    EGLTFTextureHDREncoding TextureHDREncoding;                                       // 0x009E (size: 0x1)
    bool bAdjustNormalmaps;                                                           // 0x009F (size: 0x1)
    bool bExportHiddenInGame;                                                         // 0x00A0 (size: 0x1)
    int32 ExportLights;                                                               // 0x00A4 (size: 0x4)
    bool bExportCameras;                                                              // 0x00A8 (size: 0x1)
    bool bExportHDRIBackdrops;                                                        // 0x00A9 (size: 0x1)
    bool bExportSkySpheres;                                                           // 0x00AA (size: 0x1)
    EGLTFVariantSetsMode VariantSetsMode;                                             // 0x00AB (size: 0x1)
    EGLTFMaterialVariantMode ExportMaterialVariants;                                  // 0x00AC (size: 0x1)
    bool bExportMeshVariants;                                                         // 0x00AD (size: 0x1)
    bool bExportVisibilityVariants;                                                   // 0x00AE (size: 0x1)

    void ResetToDefault();
}; // Size: 0xB0

class UGLTFExporter : public UExporter
{

    bool ExportToGLTF(class UObject* Object, FString FilePath, const class UGLTFExportOptions* Options, const TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages);
}; // Size: 0x78

class UGLTFLevelExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFLevelSequenceExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFMaterialExportOptions : public UAssetUserData
{
    class UMaterialInterface* Proxy;                                                  // 0x0028 (size: 0x8)
    FGLTFOverrideMaterialBakeSettings Default;                                        // 0x0030 (size: 0x6)
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> Inputs; // 0x0038 (size: 0x50)

}; // Size: 0x88

class UGLTFMaterialExporter : public UGLTFExporter
{
    class UStaticMesh* DefaultPreviewMesh;                                            // 0x0078 (size: 0x8)

}; // Size: 0x80

class UGLTFProxyOptions : public UObject
{
    bool bBakeMaterialInputs;                                                         // 0x0028 (size: 0x1)
    EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize;                                 // 0x0029 (size: 0x1)
    TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter;                             // 0x002A (size: 0x1)
    TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling;                            // 0x002B (size: 0x1)
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x0030 (size: 0x50)

    void ResetToDefault();
}; // Size: 0x80

class UGLTFSkeletalMeshExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFStaticMeshExporter : public UGLTFExporter
{
}; // Size: 0x78

#endif
