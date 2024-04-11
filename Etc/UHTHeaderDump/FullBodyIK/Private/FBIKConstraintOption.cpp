#include "FBIKConstraintOption.h"

FFBIKConstraintOption::FFBIKConstraintOption() {
    this->bEnabled = false;
    this->bUseStiffness = false;
    this->bUseAngularLimit = false;
    this->bUsePoleVector = false;
    this->PoleVectorOption = EPoleVectorOption::Direction;
}

