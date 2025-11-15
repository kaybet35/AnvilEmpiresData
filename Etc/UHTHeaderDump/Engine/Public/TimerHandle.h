#pragma once
#include "CoreMinimal.h"
#include "TimerHandle.generated.h"

USTRUCT(BlueprintType)
struct FTimerHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 Handle;
    
public:
    ENGINE_API FTimerHandle();
};

