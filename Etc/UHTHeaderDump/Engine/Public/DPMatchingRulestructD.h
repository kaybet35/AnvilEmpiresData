#pragma once
#include "CoreMinimal.h"
#include "DPMatchingRulestructBase.h"
#include "DPMatchingRulestructC.h"
#include "DPMatchingRulestructD.generated.h"

USTRUCT(BlueprintType)
struct FDPMatchingRulestructD : public FDPMatchingRulestructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructC> OnTrue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructC> OnFalse;
    
    ENGINE_API FDPMatchingRulestructD();
};

