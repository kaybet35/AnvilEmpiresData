#include "VisBalljointComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PowerUnitDataComponent -FallbackName=PowerUnitDataComponent

UVisBalljointComponent::UVisBalljointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsStart = false;
    this->PowerUnitDataComponent = CreateDefaultSubobject<UPowerUnitDataComponent>(TEXT("PowerUnitDataComponent"));
    this->AdapterMesh = NULL;
    this->BalljointMesh = NULL;
    this->BalljointBaseMesh = NULL;
    this->LeftTrimMesh = NULL;
    this->RightTrimMesh = NULL;
}


