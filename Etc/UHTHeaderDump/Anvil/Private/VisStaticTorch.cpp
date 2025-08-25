#include "VisStaticTorch.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=CombustionDataComponent -FallbackName=CombustionDataComponent

AVisStaticTorch::AVisStaticTorch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CombustionDataComponent = CreateDefaultSubobject<UCombustionDataComponent>(TEXT("CombustionDataComponent"));
    this->VisibleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleMesh"));
    this->ShadowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShadowMesh"));
    this->ShadowMeshVerticalScale = 1.00f;
    this->OnFoundationLightIntensity = 15.00f;
    this->OnFoundationVerticalOffset = 250.00f;
    this->bOnFoundationUseInverseSquaredFalloff = false;
    this->OnFoundationLightFalloffExponent = 4.00f;
    this->OnFoundationShadowMeshVerticalScale = 0.50f;
    this->VisibleMesh->SetupAttachment(RootComponent);
    this->ShadowMesh->SetupAttachment(RootComponent);
}


