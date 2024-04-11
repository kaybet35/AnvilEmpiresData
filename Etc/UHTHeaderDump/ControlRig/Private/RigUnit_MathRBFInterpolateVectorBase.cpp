#include "RigUnit_MathRBFInterpolateVectorBase.h"

FRigUnit_MathRBFInterpolateVectorBase::FRigUnit_MathRBFInterpolateVectorBase() {
    this->DistanceFunction = ERBFVectorDistanceType::Euclidean;
    this->SmoothingFunction = ERBFKernelType::Gaussian;
    this->SmoothingRadius = 0.00f;
    this->bNormalizeOutput = false;
}

