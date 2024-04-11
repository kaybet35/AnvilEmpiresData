#include "VisBalljointComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PowerUnitDataComponent -FallbackName=PowerUnitDataComponent
#include "VisStaticMeshComponent.h"

UVisBalljointComponent::UVisBalljointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroundDecalComponent = NULL;
    this->BalljointMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BalljointMesh"));
    this->BalljointBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BalljointBaseMesh"));
    this->LeftTrimMesh = CreateDefaultSubobject<UVisStaticMeshComponent>(TEXT("LeftTrimMesh"));
    this->RightTrimMesh = CreateDefaultSubobject<UVisStaticMeshComponent>(TEXT("RightTrimMesh"));
    this->bIsStart = false;
    this->PowerUnitDataComponent = CreateDefaultSubobject<UPowerUnitDataComponent>(TEXT("PowerUnitDataComponent"));
    this->BalljointMaterial = NULL;
    this->LeftTrimMaterial = NULL;
    this->RightTrimMaterial = NULL;
}


