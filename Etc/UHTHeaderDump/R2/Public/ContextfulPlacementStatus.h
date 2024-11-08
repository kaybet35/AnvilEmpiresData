#pragma once
#include "CoreMinimal.h"
#include "EAnvilPlacementStatus.h"
#include "ContextfulPlacementStatus.generated.h"

USTRUCT(BlueprintType)
struct FContextfulPlacementStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilPlacementStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Context;
    
    R2_API FContextfulPlacementStatus();
};

