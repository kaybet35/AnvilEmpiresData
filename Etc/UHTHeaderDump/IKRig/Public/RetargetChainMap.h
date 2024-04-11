#pragma once
#include "CoreMinimal.h"
#include "RetargetChainMap.generated.h"

USTRUCT(BlueprintType)
struct IKRIG_API FRetargetChainMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetChain;
    
    FRetargetChainMap();
};

