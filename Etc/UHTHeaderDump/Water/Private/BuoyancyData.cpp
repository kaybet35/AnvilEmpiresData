#include "BuoyancyData.h"

FBuoyancyData::FBuoyancyData() {
    this->bCenterPontoonsOnCOM = false;
    this->BuoyancyCoefficient = 0.00f;
    this->BuoyancyDamp = 0.00f;
    this->BuoyancyDamp2 = 0.00f;
    this->BuoyancyRampMinVelocity = 0.00f;
    this->BuoyancyRampMaxVelocity = 0.00f;
    this->BuoyancyRampMax = 0.00f;
    this->MaxBuoyantForce = 0.00f;
    this->bApplyDragForcesInWater = false;
    this->DragCoefficient = 0.00f;
    this->DragCoefficient2 = 0.00f;
    this->AngularDragCoefficient = 0.00f;
    this->MaxDragSpeed = 0.00f;
    this->bApplyRiverForces = false;
    this->RiverPontoonIndex = 0;
    this->WaterShorePushFactor = 0.00f;
    this->RiverTraversalPathWidth = 0.00f;
    this->MaxShorePushForce = 0.00f;
    this->WaterVelocityStrength = 0.00f;
    this->MaxWaterForce = 0.00f;
    this->bAlwaysAllowLateralPush = false;
    this->bAllowCurrentWhenMovingFastUpstream = false;
    this->bApplyDownstreamAngularRotation = false;
    this->DownstreamRotationStrength = 0.00f;
    this->DownstreamRotationStiffness = 0.00f;
    this->DownstreamRotationAngularDamping = 0.00f;
    this->DownstreamMaxAcceleration = 0.00f;
}

