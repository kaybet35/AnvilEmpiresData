#include "IKRigPBIKSolver.h"

UIKRigPBIKSolver::UIKRigPBIKSolver() {
    this->Iterations = 20;
    this->MassMultiplier = 1.00f;
    this->MinMassMultiplier = 0.20f;
    this->bAllowStretch = false;
    this->RootBehavior = EPBIKRootBehavior::PrePull;
    this->bStartSolveFromInputPose = true;
}


