#include "VisCart.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=AnimalAIDataComponent -FallbackName=AnimalAIDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HungerDataComponent -FallbackName=HungerDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=StaminaDataComponent -FallbackName=StaminaDataComponent

AVisCart::AVisCart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HungerDataComponent = CreateDefaultSubobject<UHungerDataComponent>(TEXT("HungerDataComponent"));
    this->StaminaDataComponent = CreateDefaultSubobject<UStaminaDataComponent>(TEXT("StaminaDataComponent"));
    this->AnimalAIDataComponent = CreateDefaultSubobject<UAnimalAIDataComponent>(TEXT("AnimalAIDataComponent"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->SaddleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SaddleMesh"));
    this->HalterHeadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HalterHeadMesh"));
    this->HalterBodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HalterBodyMesh"));
    this->HalterHeadMesh->SetupAttachment(RootComponent);
    this->HalterBodyMesh->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->SaddleMesh->SetupAttachment(RootComponent);
}


