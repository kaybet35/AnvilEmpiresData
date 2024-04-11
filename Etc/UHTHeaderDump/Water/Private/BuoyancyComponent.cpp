#include "BuoyancyComponent.h"

UBuoyancyComponent::UBuoyancyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SimulatingComponent = NULL;
}

void UBuoyancyComponent::OnPontoonExitedWater(const FSphericalPontoon& Pontoon) {
}

void UBuoyancyComponent::OnPontoonEnteredWater(const FSphericalPontoon& Pontoon) {
}

bool UBuoyancyComponent::IsOverlappingWaterBody() const {
    return false;
}

bool UBuoyancyComponent::IsInWaterBody() const {
    return false;
}

void UBuoyancyComponent::GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32& OutWaterBodyIdx, FVector& OutWaterVelocity) {
}

TArray<UWaterBodyComponent*> UBuoyancyComponent::GetCurrentWaterBodyComponents() const {
    return TArray<UWaterBodyComponent*>();
}


