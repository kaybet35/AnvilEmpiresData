#pragma once
#include "CoreMinimal.h"
#include "DPMatchingRulestructBase.h"
#include "DPMatchingRulestructA.generated.h"

USTRUCT(BlueprintType)
struct FDPMatchingRulestructA : public FDPMatchingRulestructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructBase> OnTrue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructBase> OnFalse;
    
    ENGINE_API FDPMatchingRulestructA();
};

