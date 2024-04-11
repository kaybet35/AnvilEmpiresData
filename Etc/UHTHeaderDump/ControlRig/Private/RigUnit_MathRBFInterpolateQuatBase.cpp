#include "RigUnit_MathRBFInterpolateQuatBase.h"

FRigUnit_MathRBFInterpolateQuatBase::FRigUnit_MathRBFInterpolateQuatBase() {
    this->DistanceFunction = ERBFQuatDistanceType::Euclidean;
    this->SmoothingFunction = ERBFKernelType::Gaussian;
    this->SmoothingAngle = 0.00f;
    this->bNormalizeOutput = false;
}

