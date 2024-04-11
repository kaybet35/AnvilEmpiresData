#include "RigUnit_SpringIK.h"

FRigUnit_SpringIK::FRigUnit_SpringIK() {
    this->HierarchyStrength = 0.00f;
    this->EffectorStrength = 0.00f;
    this->EffectorRatio = 0.00f;
    this->RootStrength = 0.00f;
    this->RootRatio = 0.00f;
    this->Damping = 0.00f;
    this->bFlipPolePlane = false;
    this->PoleVectorKind = EControlRigVectorKind::Direction;
    this->bLiveSimulation = false;
    this->Iterations = 0;
    this->bLimitLocalPosition = false;
    this->bPropagateToChildren = false;
}

