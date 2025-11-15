#pragma once
#include "CoreMinimal.h"
#include "DPMatchingRulestructBase.h"
#include "DPMatchingRulestructE.h"
#include "DPMatchingRulestruct.generated.h"

USTRUCT(BlueprintType)
struct FDPMatchingRulestruct : public FDPMatchingRulestructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructE> OnTrue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructE> OnFalse;
    
    ENGINE_API FDPMatchingRulestruct();
};

