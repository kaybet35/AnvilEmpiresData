#include "SphereReflectionCaptureComponent.h"

USphereReflectionCaptureComponent::USphereReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InfluenceRadius = 3000.00f;
    this->CaptureDistanceScale = 0.00f;
    this->PreviewInfluenceRadius = NULL;
}


