#include "MeshApproximationSettings.h"

FMeshApproximationSettings::FMeshApproximationSettings() {
    this->OutputType = EMeshApproximationType::MeshAndMaterials;
    this->ApproximationAccuracy = 0.00f;
    this->ClampVoxelDimension = 0;
    this->bAttemptAutoThickening = false;
    this->TargetMinThicknessMultiplier = 0.00f;
    this->bIgnoreTinyParts = false;
    this->TinyPartSizeMultiplier = 0.00f;
    this->BaseCapping = EMeshApproximationBaseCappingType::NoBaseCapping;
    this->WindingThreshold = 0.00f;
    this->bFillGaps = false;
    this->GapDistance = 0.00f;
    this->OcclusionMethod = EOccludedGeometryFilteringPolicy::NoOcclusionFiltering;
    this->bOccludeFromBottom = false;
    this->SimplifyMethod = EMeshApproximationSimplificationPolicy::FixedTriangleCount;
    this->TargetTriCount = 0;
    this->TrianglesPerM = 0.00f;
    this->GeometricDeviation = 0.00f;
    this->GroundClipping = EMeshApproximationGroundPlaneClippingPolicy::NoGroundClipping;
    this->GroundClippingZHeight = 0.00f;
    this->bEstimateHardNormals = false;
    this->HardNormalAngle = 0.00f;
    this->UVGenerationMethod = EMeshApproximationUVGenerationPolicy::PreferUVAtlas;
    this->InitialPatchCount = 0;
    this->CurvatureAlignment = 0.00f;
    this->MergingThreshold = 0.00f;
    this->MaxAngleDeviation = 0.00f;
    this->bGenerateNaniteEnabledMesh = false;
    this->NaniteProxyTrianglePercent = 0.00f;
    this->bSupportRayTracing = false;
    this->bAllowDistanceField = false;
    this->MultiSamplingAA = 0;
    this->RenderCaptureResolution = 0;
    this->CaptureFieldOfView = 0.00f;
    this->NearPlaneDist = 0.00f;
    this->bUseRenderLODMeshes = false;
    this->bEnableSimplifyPrePass = false;
    this->bEnableParallelBaking = false;
    this->bPrintDebugMessages = false;
    this->bEmitFullDebugMesh = false;
}

