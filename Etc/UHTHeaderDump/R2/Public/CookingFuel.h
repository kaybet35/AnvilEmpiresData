#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CookingFuel.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FCookingFuel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> FuelItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnDurationSec;
    
    R2_API FCookingFuel();
};

