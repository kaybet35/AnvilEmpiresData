#include "VisPowerMill.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=PowerMillDataComponent -FallbackName=PowerMillDataComponent

AVisPowerMill::AVisPowerMill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNightVisibility = true;
    this->PowerMillDataComponent = CreateDefaultSubobject<UPowerMillDataComponent>(TEXT("PowerMillDataComponent"));
    this->SKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SKMesh"));
    this->AnimInst = NULL;
    this->SKMesh->SetupAttachment(RootComponent);
}


