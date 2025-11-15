#pragma once
#include "CoreMinimal.h"
#include "DPMatchingIfCondition.generated.h"

USTRUCT(BlueprintType)
struct FDPMatchingIfCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Arg1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Arg2;
    
    ENGINE_API FDPMatchingIfCondition();
};

