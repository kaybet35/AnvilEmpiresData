#pragma once
#include "CoreMinimal.h"
#include "ActorInstanceHandle.h"
#include "OverlapResult.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct ENGINE_API FOverlapResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorInstanceHandle OverlapObjectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockingHit: 1;
    
    FOverlapResult();
};

