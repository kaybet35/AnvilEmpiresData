#include "VisHitConverterStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=HitConverterDataComponent -FallbackName=HitConverterDataComponent

AVisHitConverterStructure::AVisHitConverterStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitConverterDataComponent = CreateDefaultSubobject<UHitConverterDataComponent>(TEXT("HitConverterDataComponent"));
    this->ConvertedItemMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ConvertedItemMeshComponent"));
    this->HitVFXLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HitVFXLocation"));
    this->HitSuccessVFX = NULL;
    this->HitFailVFX = NULL;
    this->HitSuccessSoundCue = NULL;
    this->HitFailSoundCue = NULL;
    this->ConvertedItemMeshComponent->SetupAttachment(RootComponent);
    this->HitVFXLocation->SetupAttachment(RootComponent);
}

void AVisHitConverterStructure::OnHitConverterCounterChanged(const float& Old, const float& New) {
}


