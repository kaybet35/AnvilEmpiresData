#include "SolverInput.h"

FSolverInput::FSolverInput() {
    this->LinearMotionStrength = 0.00f;
    this->MinLinearMotionStrength = 0.00f;
    this->AngularMotionStrength = 0.00f;
    this->MinAngularMotionStrength = 0.00f;
    this->DefaultTargetClamp = 0.00f;
    this->Precision = 0.00f;
    this->Damping = 0.00f;
    this->MaxIterations = 0;
    this->bUseJacobianTranspose = false;
}

