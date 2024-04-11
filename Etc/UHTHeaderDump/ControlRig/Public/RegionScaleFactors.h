#pragma once
#include "CoreMinimal.h"
#include "RegionScaleFactors.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRegionScaleFactors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositiveWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegativeWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositiveHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegativeHeight;
    
    FRegionScaleFactors();
};

