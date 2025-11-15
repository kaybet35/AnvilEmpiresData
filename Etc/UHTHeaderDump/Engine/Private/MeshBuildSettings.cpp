#include "MeshBuildSettings.h"

FMeshBuildSettings::FMeshBuildSettings() {
    this->bUseMikkTSpace = false;
    this->bRecomputeNormals = false;
    this->bRecomputeTangents = false;
    this->bComputeWeightedNormals = false;
    this->bRemoveDegenerates = false;
    this->bBuildReversedIndexBuffer = false;
    this->bUseHighPrecisionTangentBasis = false;
    this->bUseFullPrecisionUVs = false;
    this->bUseBackwardsCompatibleF16TruncUVs = false;
    this->bGenerateLightmapUVs = false;
    this->bGenerateDistanceFieldAsIfTwoSided = false;
    this->bSupportFaceRemap = false;
    this->MinLightmapResolution = 0;
    this->SrcLightmapIndex = 0;
    this->DstLightmapIndex = 0;
    this->BuildScale = 0.00f;
    this->DistanceFieldResolutionScale = 0.00f;
    this->DistanceFieldReplacementMesh = NULL;
    this->MaxLumenMeshCards = 0;
}

