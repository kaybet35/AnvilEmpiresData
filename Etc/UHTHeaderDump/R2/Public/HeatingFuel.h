#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HeatingFuel.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FHeatingFuel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> FuelItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnDurationSec;
    
    R2_API FHeatingFuel();
};

