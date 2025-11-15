#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleKillBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleKillBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleKillBase();

};

