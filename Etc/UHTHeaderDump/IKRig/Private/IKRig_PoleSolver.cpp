#include "IKRig_PoleSolver.h"
#include "IKRig_PoleSolverEffector.h"

UIKRig_PoleSolver::UIKRig_PoleSolver() {
    this->Effector = CreateDefaultSubobject<UIKRig_PoleSolverEffector>(TEXT("Effector"));
}


