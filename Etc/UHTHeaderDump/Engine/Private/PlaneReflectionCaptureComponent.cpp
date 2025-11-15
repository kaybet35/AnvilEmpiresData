#include "PlaneReflectionCaptureComponent.h"

UPlaneReflectionCaptureComponent::UPlaneReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InfluenceRadiusScale = 2.00f;
    this->PreviewInfluenceRadius = NULL;
    this->PreviewCaptureBox = NULL;
}


