#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleOrientationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleOrientationBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleOrientationBase();

};

