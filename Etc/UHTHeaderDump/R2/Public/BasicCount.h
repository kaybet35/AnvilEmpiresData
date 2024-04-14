#pragma once
#include "CoreMinimal.h"
#include "BasicCount.generated.h"

USTRUCT(BlueprintType)
struct FBasicCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    R2_API FBasicCount();
};

