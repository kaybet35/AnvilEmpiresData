#include "AnimNode_ControlRigBase.h"

FAnimNode_ControlRigBase::FAnimNode_ControlRigBase() {
    this->bResetInputPoseToInitial = false;
    this->bTransferInputPose = false;
    this->bTransferInputCurves = false;
    this->bTransferPoseInGlobalSpace = false;
    this->bExecute = false;
}

