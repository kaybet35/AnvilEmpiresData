#include "PhysicsAssetSolverSettings.h"

FPhysicsAssetSolverSettings::FPhysicsAssetSolverSettings() {
    this->PositionIterations = 0;
    this->VelocityIterations = 0;
    this->ProjectionIterations = 0;
    this->CullDistance = 0.00f;
    this->MaxDepenetrationVelocity = 0.00f;
    this->FixedTimeStep = 0.00f;
    this->bUseLinearJointSolver = false;
}

