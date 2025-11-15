#pragma once
#include "CoreMinimal.h"
#include "ScalarParameterAtlasInstanceData.generated.h"

class UCurveLinearColor;
class UCurveLinearColorAtlas;

USTRUCT(BlueprintType)
struct FScalarParameterAtlasInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedAsAtlasPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveLinearColor> Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveLinearColorAtlas> Atlas;
    
    ENGINE_API FScalarParameterAtlasInstanceData();
};

