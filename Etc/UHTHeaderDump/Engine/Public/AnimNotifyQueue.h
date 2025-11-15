#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyArray.h"
#include "AnimNotifyEventReference.h"
#include "AnimNotifyQueue.generated.h"

USTRUCT(BlueprintType)
struct FAnimNotifyQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAnimNotifyEventReference> AnimNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies;
    
    ENGINE_API FAnimNotifyQueue();
};

