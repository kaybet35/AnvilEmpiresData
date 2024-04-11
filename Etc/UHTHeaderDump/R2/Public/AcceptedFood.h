#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AcceptedFood.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FAcceptedFood {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConversionRate;
    
    R2_API FAcceptedFood();
};

