#include "VisAnimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=AnimalAIDataComponent -FallbackName=AnimalAIDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HealthDataComponent -FallbackName=HealthDataComponent

AVisAnimal::AVisAnimal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->AnimalAIDataComponent = CreateDefaultSubobject<UAnimalAIDataComponent>(TEXT("AnimalAIDataComponent"));
    this->HealthDataComponent = CreateDefaultSubobject<UHealthDataComponent>(TEXT("HealthDataComponent"));
    this->Capsule = (UCapsuleComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->TelegraphSoundQueue = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}


