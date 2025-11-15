#pragma once
#include "CoreMinimal.h"
#include "EFilterInterpolationType.h"
#include "InterpolationParameter.generated.h"

USTRUCT(BlueprintType)
struct FInterpolationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampingRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFilterInterpolationType> InterpolationType;
    
    ENGINE_API FInterpolationParameter();
};

