#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "FoliageDensityFalloff.h"
#include "ProceduralFoliageBlockingVolume.generated.h"

class AProceduralFoliageVolume;

UCLASS(Blueprintable, MinimalAPI)
class AProceduralFoliageBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProceduralFoliageVolume* ProceduralFoliageVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageDensityFalloff DensityFalloff;
    
    AProceduralFoliageBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

