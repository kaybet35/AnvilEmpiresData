#include "SplineProxyComponent.h"

USplineProxyComponent::USplineProxyComponent() {
    this->PieceLength = 100.00f;
    this->MaxSegmentLength = 500.00f;
    this->MinSplineLength = 150.00f;
    this->MaxSplineLength = 2000.00f;
    this->SlopeMax = 1.00f;
    this->FlatSlope = 0.10f;
    this->bPlatformMode = false;
    this->bBridgeMode = false;
    this->MidPieceZOffset = 0.00f;
    this->MidPiece = NULL;
    this->EndPiece = NULL;
    this->SnappingChannel = EAnvilSnappingChannelType::General;
    this->SurfaceType = EAnvilPhysicalSurfaceType::Default;
    this->CollisionMask = 0;
    this->Tags = 0;
    this->StepAngle = 0.00f;
    this->bVaultable = true;
}


