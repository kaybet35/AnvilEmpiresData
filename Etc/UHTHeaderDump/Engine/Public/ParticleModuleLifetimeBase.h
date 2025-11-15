#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleLifetimeBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleLifetimeBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleLifetimeBase();

};

