#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "ParticleModuleLocationEmitterDirect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    FName EmitterName;
    
    UParticleModuleLocationEmitterDirect();

};

