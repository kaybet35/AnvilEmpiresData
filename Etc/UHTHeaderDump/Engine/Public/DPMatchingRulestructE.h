#pragma once
#include "CoreMinimal.h"
#include "DPMatchingRulestructBase.h"
#include "DPMatchingRulestructD.h"
#include "DPMatchingRulestructE.generated.h"

USTRUCT(BlueprintType)
struct FDPMatchingRulestructE : public FDPMatchingRulestructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructD> OnTrue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructD> OnFalse;
    
    ENGINE_API FDPMatchingRulestructE();
};

