#include "BlendSpace.h"

UBlendSpace::UBlendSpace() {
    this->bContainsRotationOffsetMeshSpaceSamples = false;
    this->TargetWeightInterpolationSpeedPerSec = 0.00f;
    this->bTargetWeightInterpolationEaseInOut = true;
    this->bAllowMeshSpaceBlending = false;
    this->bLoop = true;
    this->AnimLength = 0.00f;
    this->NotifyTriggerMode = ENotifyTriggerMode::HighestWeightedAnimation;
    this->bInterpolateUsingGrid = false;
    this->PreferredTriangulationDirection = EPreferredTriangulationDirection::Tangential;
    this->SampleIndexWithMarkers = -1;
    this->AxisToScaleAnimation = BSA_None;
    this->DimensionIndices.AddDefaulted(2);
}


