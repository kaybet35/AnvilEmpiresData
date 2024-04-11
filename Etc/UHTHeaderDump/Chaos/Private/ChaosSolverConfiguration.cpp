#include "ChaosSolverConfiguration.h"

FChaosSolverConfiguration::FChaosSolverConfiguration() {
    this->PositionIterations = 0;
    this->VelocityIterations = 0;
    this->ProjectionIterations = 0;
    this->CollisionMarginFraction = 0.00f;
    this->CollisionMarginMax = 0.00f;
    this->CollisionCullDistance = 0.00f;
    this->CollisionMaxPushOutVelocity = 0.00f;
    this->ClusterConnectionFactor = 0.00f;
    this->ClusterUnionConnectionType = EClusterUnionMethod::PointImplicit;
    this->bGenerateCollisionData = false;
    this->bGenerateBreakData = false;
    this->bGenerateTrailingData = false;
    this->Iterations = 0;
    this->PushOutIterations = 0;
    this->bGenerateContactGraph = false;
}

