#include "VisCart.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HungerDataComponent -FallbackName=HungerDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=StaminaDataComponent -FallbackName=StaminaDataComponent

AVisCart::AVisCart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HungerDataComponent = CreateDefaultSubobject<UHungerDataComponent>(TEXT("HungerDataComponent"));
    this->StaminaDataComponent = CreateDefaultSubobject<UStaminaDataComponent>(TEXT("StaminaDataComponent"));
    this->HorseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HorseMesh"));
    this->SaddleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SaddleMesh"));
    this->CartMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CartMesh"));
    this->HorseMesh->SetupAttachment(RootComponent);
    this->SaddleMesh->SetupAttachment(RootComponent);
    this->CartMesh->SetupAttachment(RootComponent);
}


