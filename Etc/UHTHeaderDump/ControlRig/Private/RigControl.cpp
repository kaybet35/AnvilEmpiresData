#include "RigControl.h"

FRigControl::FRigControl() {
    this->ControlType = ERigControlType::Bool;
    this->ParentIndex = 0;
    this->SpaceIndex = 0;
    this->PrimaryAxis = ERigControlAxis::X;
    this->bIsCurve = false;
    this->bAnimatable = false;
    this->bLimitTranslation = false;
    this->bLimitRotation = false;
    this->bLimitScale = false;
    this->bDrawLimits = false;
    this->bGizmoEnabled = false;
    this->bGizmoVisible = false;
    this->bIsTransientControl = false;
    this->ControlEnum = NULL;
}

