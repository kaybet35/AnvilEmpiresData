#include "ChaosClothConfig.h"

UChaosClothConfig::UChaosClothConfig() {
    this->MassMode = EClothMassMode::Density;
    this->UniformMass = 0.00f;
    this->TotalMass = 0.50f;
    this->Density = 0.35f;
    this->MinPerParticleMass = 0.00f;
    this->bUseBendingElements = false;
    this->BucklingRatio = 0.00f;
    this->VolumeStiffness = 0.00f;
    this->bUseGeodesicDistance = true;
    this->ShapeTargetStiffness = 0.00f;
    this->CollisionThickness = 1.00f;
    this->FrictionCoefficient = 0.80f;
    this->bUseCCD = false;
    this->bUseSelfCollisions = false;
    this->SelfCollisionThickness = 2.00f;
    this->SelfCollisionFriction = 0.00f;
    this->bUseSelfIntersections = false;
    this->bUseLegacyBackstop = false;
    this->DampingCoefficient = 0.01f;
    this->LocalDampingCoefficient = 0.00f;
    this->bUsePointBasedWindModel = false;
    this->bUseGravityOverride = false;
    this->GravityScale = 1.00f;
    this->AngularVelocityScale = 0.75f;
    this->FictitiousAngularScale = 1.00f;
    this->bUseTetrahedralConstraints = false;
    this->bUseThinShellVolumeConstraints = false;
    this->bUseContinuousCollisionDetection = false;
}


