#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleRotationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleRotationBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleRotationBase();

};

