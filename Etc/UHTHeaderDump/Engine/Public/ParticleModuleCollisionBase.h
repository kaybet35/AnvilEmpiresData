#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleCollisionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleCollisionBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleCollisionBase();

};

