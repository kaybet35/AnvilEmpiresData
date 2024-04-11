#include "SplineDataComponent.h"

USplineDataComponent::USplineDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SegmentLength = 0.00f;
    this->Slope = 0.00f;
}


