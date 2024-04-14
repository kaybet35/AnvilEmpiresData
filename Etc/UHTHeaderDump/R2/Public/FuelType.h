#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FuelType.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FFuelType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> FuelItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FuelItemVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnDurationSec;
    
    R2_API FFuelType();
};

