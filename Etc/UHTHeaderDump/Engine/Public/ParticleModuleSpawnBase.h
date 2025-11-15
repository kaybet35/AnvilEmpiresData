#pragma once
#include "CoreMinimal.h"
#include "ParticleModule.h"
#include "ParticleModuleSpawnBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UParticleModuleSpawnBase : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProcessSpawnRate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProcessBurstList: 1;
    
    UParticleModuleSpawnBase();

};

