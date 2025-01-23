#include "VisOfflineCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ArmorDataComponent -FallbackName=ArmorDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HealthDataComponent -FallbackName=HealthDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=OfflineCharacterDataComponent -FallbackName=OfflineCharacterDataComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=TeamDataComponent -FallbackName=TeamDataComponent
#include "VisPlayerVisualsComponent.h"

AVisOfflineCharacter::AVisOfflineCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->OfflineCharacterDataComponent = CreateDefaultSubobject<UOfflineCharacterDataComponent>(TEXT("OfflineCharacterDataComponent"));
    this->DeathCue = NULL;
    this->Capsule = (UCapsuleComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->PlayerVisualsComponent = CreateDefaultSubobject<UVisPlayerVisualsComponent>(TEXT("PlayerVisualsComponent"));
    this->HealthDataComponent = CreateDefaultSubobject<UHealthDataComponent>(TEXT("HealthDataComponent"));
    this->TeamDataComponent = CreateDefaultSubobject<UTeamDataComponent>(TEXT("TeamDataComponent"));
    this->ArmourDataComponent = CreateDefaultSubobject<UArmorDataComponent>(TEXT("ArmourDataComponent"));
    this->Head->SetupAttachment(Mesh);
    this->Mesh->SetupAttachment(RootComponent);
}


