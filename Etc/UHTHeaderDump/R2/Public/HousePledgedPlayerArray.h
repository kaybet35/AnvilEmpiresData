#pragma once
#include "CoreMinimal.h"
#include "HousePledgedPlayerArray.generated.h"

USTRUCT(BlueprintType)
struct FHousePledgedPlayerArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> WrappedArray;
    
    R2_API FHousePledgedPlayerArray();
};

