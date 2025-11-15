#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleEventReceiverBase.h"
#include "ParticleModuleEventReceiverKillParticles.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopSpawning: 1;
    
    UParticleModuleEventReceiverKillParticles();

};

