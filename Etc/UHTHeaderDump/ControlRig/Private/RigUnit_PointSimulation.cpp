#include "RigUnit_PointSimulation.h"

FRigUnit_PointSimulation::FRigUnit_PointSimulation() {
    this->SimulatedStepsPerSecond = 0.00f;
    this->IntegratorType = ECRSimPointIntegrateType::Verlet;
    this->VerletBlend = 0.00f;
    this->bLimitLocalPosition = false;
    this->bPropagateToChildren = false;
}

