#pragma once
#include "CoreMinimal.h"
#include "ParticleEvent_GenerateInfo.h"
#include "ParticleModuleEventBase.h"
#include "ParticleModuleEventGenerator.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UParticleModuleEventGenerator : public UParticleModuleEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    TArray<FParticleEvent_GenerateInfo> Events;
    
    UParticleModuleEventGenerator();

};

