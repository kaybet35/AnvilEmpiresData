#include "ChaosClothingInteractor.h"

UChaosClothingInteractor::UChaosClothingInteractor() {
}

void UChaosClothingInteractor::SetWind(FVector2D Drag, FVector2D Lift, float AirDensity, FVector WindVelocity) {
}

void UChaosClothingInteractor::SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale) {
}

void UChaosClothingInteractor::SetPressure(FVector2D Pressure) {
}

void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness) {
}

void UChaosClothingInteractor::SetMaterial(FVector2D EdgeStiffness, FVector2D BendingStiffness, FVector2D AreaStiffness) {
}

void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale) {
}

void UChaosClothingInteractor::SetLongRangeAttachment(FVector2D TetherStiffness, FVector2D TetherScale) {
}

void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride) {
}

void UChaosClothingInteractor::SetDamping(float DampingCoefficient, float LocalDampingCoefficient) {
}

void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness) {
}

void UChaosClothingInteractor::SetBackstop(bool bEnabled) {
}

void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness) {
}

void UChaosClothingInteractor::SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping) {
}

void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity) {
}

void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport) {
}


