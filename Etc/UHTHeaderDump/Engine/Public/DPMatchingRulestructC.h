#pragma once
#include "CoreMinimal.h"
#include "DPMatchingRulestructB.h"
#include "DPMatchingRulestructBase.h"
#include "DPMatchingRulestructC.generated.h"

USTRUCT(BlueprintType)
struct FDPMatchingRulestructC : public FDPMatchingRulestructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructB> OnTrue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingRulestructB> OnFalse;
    
    ENGINE_API FDPMatchingRulestructC();
};

