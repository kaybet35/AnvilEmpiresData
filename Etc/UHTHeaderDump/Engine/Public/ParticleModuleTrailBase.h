#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleTrailBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleTrailBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleTrailBase();

};

