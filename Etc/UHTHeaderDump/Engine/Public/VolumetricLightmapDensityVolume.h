#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "Volume.h"
#include "VolumetricLightmapDensityVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AVolumetricLightmapDensityVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval AllowedMipLevelRange;
    
    AVolumetricLightmapDensityVolume(const FObjectInitializer& ObjectInitializer);

};

