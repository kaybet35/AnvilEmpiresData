#include "PBIKSolverSettings.h"

FPBIKSolverSettings::FPBIKSolverSettings() {
    this->Iterations = 0;
    this->MassMultiplier = 0.00f;
    this->MinMassMultiplier = 0.00f;
    this->bAllowStretch = false;
    this->RootBehavior = EPBIKRootBehavior::PrePull;
    this->bStartSolveFromInputPose = false;
}

