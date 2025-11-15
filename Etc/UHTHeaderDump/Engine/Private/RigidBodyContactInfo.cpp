#include "RigidBodyContactInfo.h"

FRigidBodyContactInfo::FRigidBodyContactInfo() {
    this->ContactPenetration = 0.00f;
    this->bContactProbe = false;
    this->PhysMaterial[0] = NULL;
    this->PhysMaterial[1] = NULL;
}

