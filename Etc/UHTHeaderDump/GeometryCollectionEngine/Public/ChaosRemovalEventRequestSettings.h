#pragma once
#include "CoreMinimal.h"
#include "EChaosRemovalSortMethod.h"
#include "ChaosRemovalEventRequestSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosRemovalEventRequestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosRemovalSortMethod SortMethod;
    
    GEOMETRYCOLLECTIONENGINE_API FChaosRemovalEventRequestSettings();
};

