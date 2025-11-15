#pragma once
#include "CoreMinimal.h"
#include "ParameterGroupData.generated.h"

USTRUCT(BlueprintType)
struct FParameterGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupSortPriority;
    
    ENGINE_API FParameterGroupData();
};

