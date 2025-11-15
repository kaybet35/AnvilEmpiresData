#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleLocationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleLocationBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleLocationBase();

};

