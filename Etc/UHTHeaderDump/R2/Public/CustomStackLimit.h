#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CustomStackLimit.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FCustomStackLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> Item;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 StackLimit;
    
    R2_API FCustomStackLimit();
};

