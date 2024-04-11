#include "CRSimPointForce.h"

FCRSimPointForce::FCRSimPointForce() {
    this->ForceType = ECRSimPointForceType::Direction;
    this->Coefficient = 0.00f;
    this->bNormalize = false;
}

