#include "VisCanalWaterControllerComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PowerUnitDataComponent -FallbackName=PowerUnitDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=SplineDataComponent -FallbackName=SplineDataComponent

UVisCanalWaterControllerComponent::UVisCanalWaterControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShiftDelta = 0.00f;
    this->ShiftMin = 2.00f;
    this->PowerUnitDataComponent = CreateDefaultSubobject<UPowerUnitDataComponent>(TEXT("PowerUnitDataComponent"));
    this->SplineDataComponent = CreateDefaultSubobject<USplineDataComponent>(TEXT("SplineDataComponent"));
    this->SplineWaterMesh = NULL;
    this->SplineWaterMaterial = NULL;
}

void UVisCanalWaterControllerComponent::OnSplineUpdate() {
}

void UVisCanalWaterControllerComponent::OnCurrentUpdate() {
}


