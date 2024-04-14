#include "ProxyPawn.h"

AProxyPawn::AProxyPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAddDefaultMovementBindings = false;
    this->VisPlayer = NULL;
    this->VisController = NULL;
    this->MaxCameraDistance = 5600.00f;
    this->MinCameraDistance = 2000.00f;
}

void AProxyPawn::StopBandwidthRecording() {
}

void AProxyPawn::StartBandwidthRecording(const FString& WatchTarget) {
}

void AProxyPawn::SetDrawCollisions(bool bDrawCollisions) {
}

void AProxyPawn::SetCameraHeight(float Height) {
}

void AProxyPawn::SetCameraFov(float FOV) {
}

void AProxyPawn::SetCameraAngle(float Angle) {
}

void AProxyPawn::OnRotateCameraStop() {
}

void AProxyPawn::OnRotateCameraStart() {
}

void AProxyPawn::OnPanCameraStop() {
}

void AProxyPawn::OnPanCameraStart() {
}

void AProxyPawn::EnterBuildMode(const uint32 BuildSiteCodeName, const uint64 ContextID) {
}

void AProxyPawn::DrawSphere(float Radius) {
}

void AProxyPawn::ClearFogOfWar() {
}

void AProxyPawn::ChangeHeight(float Adjust) {
}

void AProxyPawn::AutoMoveOff() {
}

void AProxyPawn::AutoMove(const FString& Arg, bool bIsSprint) {
}


