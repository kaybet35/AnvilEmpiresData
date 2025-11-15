#pragma once
#include "CoreMinimal.h"
#include "PooledCameraShakes.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FPooledCameraShakes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraShakeBase*> PooledShakes;
    
    ENGINE_API FPooledCameraShakes();
};

