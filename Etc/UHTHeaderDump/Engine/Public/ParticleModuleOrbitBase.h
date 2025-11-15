#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleOrbitBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleOrbitBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseEmitterTime: 1;
    
    UParticleModuleOrbitBase();

};

