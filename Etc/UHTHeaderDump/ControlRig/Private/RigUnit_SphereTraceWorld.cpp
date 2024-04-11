#include "RigUnit_SphereTraceWorld.h"

FRigUnit_SphereTraceWorld::FRigUnit_SphereTraceWorld() {
    this->Channel = ECC_WorldStatic;
    this->Radius = 0.00f;
    this->bHit = false;
}

