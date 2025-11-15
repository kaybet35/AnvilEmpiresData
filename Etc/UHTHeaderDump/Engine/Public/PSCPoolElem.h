#pragma once
#include "CoreMinimal.h"
#include "PSCPoolElem.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FPSCPoolElem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC;
    
    ENGINE_API FPSCPoolElem();
};

