#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleAccelerationBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleAccelerationBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysInWorldSpace: 1;
    
    UParticleModuleAccelerationBase();

};

