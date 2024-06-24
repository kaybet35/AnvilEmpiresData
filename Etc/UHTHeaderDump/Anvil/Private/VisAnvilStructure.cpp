#include "VisAnvilStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=AnvilDataComponent -FallbackName=AnvilDataComponent

AVisAnvilStructure::AVisAnvilStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnvilDataComponent = CreateDefaultSubobject<UAnvilDataComponent>(TEXT("AnvilDataComponent"));
    this->ConvertedItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ConvertedItemMeshComponent"));
    this->HitVFXLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HitVFXLocation"));
    this->HitSuccessVFX = NULL;
    this->HitFailVFX = NULL;
    this->HitSuccessSoundCue = NULL;
    this->HitFailSoundCue = NULL;
    this->ConvertedItemMeshComponent->SetupAttachment(RootComponent);
    this->HitVFXLocation->SetupAttachment(RootComponent);
}

void AVisAnvilStructure::OnHitCounterChanged(const float& Old, const float& New) {
}


