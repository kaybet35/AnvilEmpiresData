#pragma once
#include "CoreMinimal.h"
#include "EntityHandle.generated.h"

class AVisActorBase;

USTRUCT(BlueprintType)
struct R2_API FEntityHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVisActorBase* CachedPtr;
    
    FEntityHandle();
};

