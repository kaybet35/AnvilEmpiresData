#include "GLTFExportOptions.h"

UGLTFExportOptions::UGLTFExportOptions() {
    this->ExportUniformScale = 0.01f;
    this->bExportPreviewMesh = true;
    this->bStrictCompliance = true;
    this->bSkipNearDefaultValues = true;
    this->bIncludeGeneratorVersion = true;
    this->bExportProxyMaterials = true;
    this->bExportUnlitMaterials = true;
    this->bExportClearCoatMaterials = true;
    this->bExportExtraBlendModes = false;
    this->BakeMaterialInputs = EGLTFMaterialBakeMode::UseMeshData;
    this->DefaultMaterialBakeSize = EGLTFMaterialBakeSizePOT::POT_1024;
    this->DefaultMaterialBakeFilter = TF_Trilinear;
    this->DefaultMaterialBakeTiling = TA_Wrap;
    this->DefaultLevelOfDetail = 0;
    this->bExportVertexColors = false;
    this->bExportVertexSkinWeights = true;
    this->bUseMeshQuantization = false;
    this->bExportLevelSequences = true;
    this->bExportAnimationSequences = true;
    this->bExportPlaybackSettings = false;
    this->TextureImageFormat = EGLTFTextureImageFormat::PNG;
    this->TextureImageQuality = 0;
    this->NoLossyImageFormatFor = 7;
    this->bExportTextureTransforms = true;
    this->bExportLightmaps = false;
    this->TextureHDREncoding = EGLTFTextureHDREncoding::None;
    this->bAdjustNormalmaps = true;
    this->bExportHiddenInGame = false;
    this->ExportLights = 6;
    this->bExportCameras = true;
    this->bExportHDRIBackdrops = false;
    this->bExportSkySpheres = false;
    this->VariantSetsMode = EGLTFVariantSetsMode::None;
    this->ExportMaterialVariants = EGLTFMaterialVariantMode::UseMeshData;
    this->bExportMeshVariants = true;
    this->bExportVisibilityVariants = true;
}

void UGLTFExportOptions::ResetToDefault() {
}


