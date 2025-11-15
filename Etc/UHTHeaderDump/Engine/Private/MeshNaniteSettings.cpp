#include "MeshNaniteSettings.h"

FMeshNaniteSettings::FMeshNaniteSettings() {
    this->bEnabled = false;
    this->bPreserveArea = false;
    this->PositionPrecision = 0;
    this->TargetMinimumResidencyInKB = 0;
    this->KeepPercentTriangles = 0.00f;
    this->TrimRelativeError = 0.00f;
    this->FallbackPercentTriangles = 0.00f;
    this->FallbackRelativeError = 0.00f;
}

