#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleCameraBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleCameraBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleCameraBase();

};

