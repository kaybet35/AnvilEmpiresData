#include "NiagaraBakerSettings.h"

UNiagaraBakerSettings::UNiagaraBakerSettings() {
    this->StartSeconds = 0.00f;
    this->DurationSeconds = 4.00f;
    this->FramesPerSecond = 60;
    this->bPreviewLooping = true;
    this->Outputs.AddDefaulted(1);
    this->CameraSettings.AddDefaulted(7);
    this->CurrentCameraIndex = 0;
    this->BakeQualityLevel = TEXT("Cinematic");
    this->bRenderComponentOnly = true;
    this->CameraViewportMode = ENiagaraBakerViewMode::Perspective;
    this->CameraOrbitDistance = 200.00f;
    this->CameraFOV = 90.00f;
    this->CameraOrthoWidth = 512.00f;
    this->bUseCameraAspectRatio = false;
    this->CameraAspectRatio = 1.00f;
}


