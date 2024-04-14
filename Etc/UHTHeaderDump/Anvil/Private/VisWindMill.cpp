#include "VisWindMill.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=EntityAttachableDataComponent -FallbackName=EntityAttachableDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PowerUnitDataComponent -FallbackName=PowerUnitDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=WindMillDataComponent -FallbackName=WindMillDataComponent

AVisWindMill::AVisWindMill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNightVisibility = true;
    this->WindMillDataComponent = CreateDefaultSubobject<UWindMillDataComponent>(TEXT("WindMillDataComponent"));
    this->PowerUnitDataComponent = CreateDefaultSubobject<UPowerUnitDataComponent>(TEXT("PowerUnitDataComponent"));
    this->SlotData = CreateDefaultSubobject<UEntityAttachableDataComponent>(TEXT("EntityAttachableDataComponent"));
    this->SKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SKMesh"));
    this->AnimInst = NULL;
    this->IsRefiningPercentageCurrentMin = 0.10f;
    this->SKMesh->SetupAttachment(RootComponent);
}


