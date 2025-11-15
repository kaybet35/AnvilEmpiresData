#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleColorBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleColorBase : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleColorBase();

};

