#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessPath.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathSegmentStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PathSegmentCount;
    
public:
    ENGINE_API FPropertyAccessPath();
};

