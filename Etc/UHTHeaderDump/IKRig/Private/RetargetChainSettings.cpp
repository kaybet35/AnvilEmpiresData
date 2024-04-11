#include "RetargetChainSettings.h"

URetargetChainSettings::URetargetChainSettings() {
    this->CopyPoseUsingFK = true;
    this->RotationMode = ERetargetRotationMode::Interpolated;
    this->RotationAlpha = 1.00f;
    this->TranslationMode = ERetargetTranslationMode::None;
    this->TranslationAlpha = 1.00f;
    this->DriveIKGoal = true;
    this->BlendToSource = 0.00f;
    this->Extension = 1.00f;
    this->UseSpeedCurveToPlantIK = false;
    this->VelocityThreshold = 15.00f;
    this->UnplantStiffness = 250.00f;
    this->UnplantCriticalDamping = 1.00f;
}


