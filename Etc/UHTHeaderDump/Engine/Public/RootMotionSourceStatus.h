#pragma once
#include "CoreMinimal.h"
#include "RootMotionSourceStatus.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRootMotionSourceStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    FRootMotionSourceStatus();
};

