#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeDurationType.h"
#include "CameraShakeDuration.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCameraShakeDuration {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShakeDurationType Type;
    
public:
    FCameraShakeDuration();
};

