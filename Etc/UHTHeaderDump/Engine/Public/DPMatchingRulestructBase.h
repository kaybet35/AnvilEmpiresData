#pragma once
#include "CoreMinimal.h"
#include "DPMatchingIfCondition.h"
#include "DPMatchingRulestructBase.generated.h"

USTRUCT(BlueprintType)
struct FDPMatchingRulestructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDPMatchingIfCondition> IfConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppendFragments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SetUserVar;
    
    ENGINE_API FDPMatchingRulestructBase();
};

