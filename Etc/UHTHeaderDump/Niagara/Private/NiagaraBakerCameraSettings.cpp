#include "NiagaraBakerCameraSettings.h"

FNiagaraBakerCameraSettings::FNiagaraBakerCameraSettings() {
    this->ViewMode = ENiagaraBakerViewMode::Perspective;
    this->OrbitDistance = 0.00f;
    this->FOV = 0.00f;
    this->OrthoWidth = 0.00f;
    this->bUseAspectRatio = false;
    this->AspectRatio = 0.00f;
}

