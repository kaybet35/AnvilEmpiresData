#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleParameterBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleParameterBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleParameterBase();

};

