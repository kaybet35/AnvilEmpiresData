#pragma once
#include "CoreMinimal.h"
#include "RawDistribution.h"
#include "RawDistributionFloat.generated.h"

class UDistributionFloat;

USTRUCT(BlueprintType)
struct ENGINE_API FRawDistributionFloat : public FRawDistribution {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UDistributionFloat* Distribution;
    
    FRawDistributionFloat();
};

