#include "VisProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ProjectileMovementDataComponent -FallbackName=ProjectileMovementDataComponent

AVisProjectile::AVisProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->ProjectileMovementDataComponent = CreateDefaultSubobject<UProjectileMovementDataComponent>(TEXT("ProjectileMovementDataComponent"));
    this->Mesh->SetupAttachment(RootComponent);
}

void AVisProjectile::OnHiddenChanged(const bool& OldHidden, const bool& NewHidden) {
}


