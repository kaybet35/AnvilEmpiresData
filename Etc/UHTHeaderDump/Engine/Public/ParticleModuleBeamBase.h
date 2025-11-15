#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleBeamBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleBeamBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleBeamBase();

};

