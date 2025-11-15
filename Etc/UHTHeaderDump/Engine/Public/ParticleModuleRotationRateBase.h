#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleRotationRateBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleRotationRateBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleRotationRateBase();

};

