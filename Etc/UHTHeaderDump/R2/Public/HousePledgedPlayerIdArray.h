#pragma once
#include "CoreMinimal.h"
#include "HousePledgedPlayerIdArray.generated.h"

USTRUCT(BlueprintType)
struct FHousePledgedPlayerIdArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> PlayerArray;
    
    R2_API FHousePledgedPlayerIdArray();
};

