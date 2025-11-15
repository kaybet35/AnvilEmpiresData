#pragma once
#include "CoreMinimal.h"
#include "DPMatchingRulestructA.h"
#include "DPMatchingRulestructBase.h"
#include "DPMatchingRulestructB.generated.h"

USTRUCT(BlueprintType)
struct FDPMatchingRulestructB : public FDPMatchingRulestructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructA> OnTrue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructA> OnFalse;
    
    ENGINE_API FDPMatchingRulestructB();
};

