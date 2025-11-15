#pragma once
#include "CoreMinimal.h"
#include "AutoCompleteNode.generated.h"

USTRUCT(BlueprintType)
struct FAutoCompleteNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AutoCompleteListIndices;
    
    ENGINE_API FAutoCompleteNode();
};

