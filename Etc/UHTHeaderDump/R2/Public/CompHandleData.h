#pragma once
#include "CoreMinimal.h"
#include "CompHandleData.generated.h"

USTRUCT(BlueprintType)
struct FCompHandleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    R2_API FCompHandleData();
};

