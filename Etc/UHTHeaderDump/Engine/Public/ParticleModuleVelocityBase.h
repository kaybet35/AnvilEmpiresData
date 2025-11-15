#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleVelocityBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleVelocityBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInWorldSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyOwnerScale: 1;
    
    UParticleModuleVelocityBase();

};

