#include "ControlRigNumericalValidationPass.h"

UControlRigNumericalValidationPass::UControlRigNumericalValidationPass() {
    this->bCheckControls = true;
    this->bCheckBones = true;
    this->bCheckCurves = true;
    this->TranslationPrecision = 0.01f;
    this->RotationPrecision = 0.01f;
    this->ScalePrecision = 0.00f;
    this->CurvePrecision = 0.01f;
}


