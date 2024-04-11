#pragma once
#include "CoreMinimal.h"
#include "CacheEventBase.h"
#include "EnableStateEvent.generated.h"

USTRUCT(BlueprintType)
struct FEnableStateEvent : public FCacheEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    CHAOSCACHING_API FEnableStateEvent();
};

