#include "PhysicsSettings.h"

UPhysicsSettings::UPhysicsSettings() {
    this->DefaultShapeComplexity = CTF_UseSimpleAsComplex;
    this->LockedAxis = ESettingsLockedAxis::Invalid;
    this->DefaultDegreesOfFreedom = ESettingsDOF::Full3D;
    this->bSuppressFaceRemapTable = false;
    this->bSupportUVFromHitResults = false;
    this->bDisableActiveActors = false;
    this->bDisableKinematicStaticPairs = false;
    this->bDisableKinematicKinematicPairs = false;
    this->bDisableCCD = false;
    this->bEnableEnhancedDeterminism = false;
    this->AnimPhysicsMinDeltaTime = 0.00f;
    this->bSimulateAnimPhysicsAfterReset = false;
    this->MinPhysicsDeltaTime = 0.00f;
    this->MaxPhysicsDeltaTime = 0.03f;
    this->bSubstepping = false;
    this->bSubsteppingAsync = false;
    this->bTickPhysicsAsync = false;
    this->AsyncFixedTimeStepSize = 0.03f;
    this->MaxSubstepDeltaTime = 0.02f;
    this->MaxSubsteps = 6;
    this->SyncSceneSmoothingFactor = 0.00f;
    this->InitialAverageFrameRate = 0.02f;
    this->PhysXTreeRebuildRate = 10;
    this->PhysicalSurfaces.AddDefaulted(17);
    this->MinDeltaVelocityForHitEvents = 0.00f;
}


