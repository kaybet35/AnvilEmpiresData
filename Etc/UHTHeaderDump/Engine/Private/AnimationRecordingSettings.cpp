#include "AnimationRecordingSettings.h"

FAnimationRecordingSettings::FAnimationRecordingSettings() {
    this->bRecordInWorldSpace = false;
    this->bRemoveRootAnimation = false;
    this->bAutoSaveAsset = false;
    this->Length = 0.00f;
    this->Interpolation = EAnimInterpolationType::Linear;
    this->InterpMode = RCIM_Linear;
    this->TangentMode = RCTM_Auto;
    this->bRecordTransforms = false;
    this->bRecordMorphTargets = false;
    this->bRecordAttributeCurves = false;
    this->bRecordMaterialCurves = false;
}

