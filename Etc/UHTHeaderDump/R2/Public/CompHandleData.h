#pragma once
#include "CoreMinimal.h"
#include "EntityHandle.h"
#include "CompHandleData.generated.h"

USTRUCT(BlueprintType)
struct FCompHandleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntityHandle Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    R2_API FCompHandleData();
};

