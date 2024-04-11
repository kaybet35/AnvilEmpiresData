#include "ControlRigPoseMirrorSettings.h"

UControlRigPoseMirrorSettings::UControlRigPoseMirrorSettings() {
    this->RightSide = TEXT("_r_");
    this->LeftSide = TEXT("_l_");
    this->MirrorAxis = EAxis::X;
    this->AxisToFlip = EAxis::X;
}


