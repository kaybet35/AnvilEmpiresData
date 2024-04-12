#include "VisHitConverterStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HitConverterDataComponent -FallbackName=HitConverterDataComponent

AVisHitConverterStructure::AVisHitConverterStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitConverterDataComponent = CreateDefaultSubobject<UHitConverterDataComponent>(TEXT("HitConverterDataComponent"));
    this->ConvertedItemMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ConvertedItemMeshComponent"));
    this->ConvertedItemMeshMaterialOverride = NULL;
    this->HitVFXLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HitVFXLocation"));
    this->HitSuccessVFX = NULL;
    this->HitFailVFX = NULL;
    this->HitSuccessSoundCue = NULL;
    this->HitFailSoundCue = NULL;
    this->HitVFXLocation->SetupAttachment(RootComponent);
    this->ConvertedItemMeshComponent->SetupAttachment(RootComponent);
}

void AVisHitConverterStructure::OnHitConverterCounterChanged(const float& Old, const float& New) {
}


