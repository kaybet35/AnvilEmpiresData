#include "CRSimPointConstraint.h"

FCRSimPointConstraint::FCRSimPointConstraint() {
    this->Type = ECRSimConstraintType::Distance;
    this->SubjectA = 0;
    this->SubjectB = 0;
}

