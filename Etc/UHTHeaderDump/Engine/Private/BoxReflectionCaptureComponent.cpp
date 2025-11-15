#include "BoxReflectionCaptureComponent.h"

UBoxReflectionCaptureComponent::UBoxReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxTransitionDistance = 100.00f;
    this->PreviewInfluenceBox = NULL;
    this->PreviewCaptureBox = NULL;
}


