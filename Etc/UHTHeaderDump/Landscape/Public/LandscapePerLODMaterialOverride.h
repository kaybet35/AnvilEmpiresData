#pragma once
#include "CoreMinimal.h"
#include "LandscapePerLODMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLandscapePerLODMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    LANDSCAPE_API FLandscapePerLODMaterialOverride();
};

