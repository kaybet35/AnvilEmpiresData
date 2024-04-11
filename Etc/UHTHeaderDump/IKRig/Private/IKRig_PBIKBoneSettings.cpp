#include "IKRig_PBIKBoneSettings.h"

UIKRig_PBIKBoneSettings::UIKRig_PBIKBoneSettings() {
    this->RotationStiffness = 0.00f;
    this->PositionStiffness = 0.00f;
    this->X = EPBIKLimitType::Free;
    this->MinX = 0.00f;
    this->MaxX = 0.00f;
    this->Y = EPBIKLimitType::Free;
    this->MinY = 0.00f;
    this->MaxY = 0.00f;
    this->Z = EPBIKLimitType::Free;
    this->MinZ = 0.00f;
    this->MaxZ = 0.00f;
    this->bUsePreferredAngles = false;
}


