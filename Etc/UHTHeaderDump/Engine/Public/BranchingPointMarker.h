#pragma once
#include "CoreMinimal.h"
#include "EAnimNotifyEventType.h"
#include "BranchingPointMarker.generated.h"

USTRUCT(BlueprintType)
struct FBranchingPointMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NotifyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAnimNotifyEventType::Type> NotifyEventType;
    
    ENGINE_API FBranchingPointMarker();
};

