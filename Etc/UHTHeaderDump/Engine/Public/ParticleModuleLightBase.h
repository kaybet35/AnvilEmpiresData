#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleLightBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleLightBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleLightBase();

};

