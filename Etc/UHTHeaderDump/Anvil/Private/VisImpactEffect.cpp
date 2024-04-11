#include "VisImpactEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=ImpactSurfaceDataComponent -FallbackName=ImpactSurfaceDataComponent

AVisImpactEffect::AVisImpactEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->HitEffectActors[0] = NULL;
    this->HitEffectActors[1] = NULL;
    this->HitEffectActors[2] = NULL;
    this->HitEffectActors[3] = NULL;
    this->HitEffectActors[4] = NULL;
    this->HitEffectActors[5] = NULL;
    this->HitEffectActors[6] = NULL;
    this->HitEffectActors[7] = NULL;
    this->HitEffectActors[8] = NULL;
    this->HitEffectActors[9] = NULL;
    this->HitEffectActors[10] = NULL;
    this->HitEffectActors[11] = NULL;
    this->HitEffectActors[12] = NULL;
    this->HitEffectActors[13] = NULL;
    this->HitEffectActors[14] = NULL;
    this->HitEffectActors[15] = NULL;
    this->HitEffectActors[16] = NULL;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->ImpactSurfaceDataComponent = CreateDefaultSubobject<UImpactSurfaceDataComponent>(TEXT("ImpactSurfaceData"));
}


