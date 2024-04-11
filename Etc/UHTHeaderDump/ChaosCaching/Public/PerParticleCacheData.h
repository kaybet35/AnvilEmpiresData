#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "ParticleTransformTrack.h"
#include "PerParticleCacheData.generated.h"

USTRUCT(BlueprintType)
struct FPerParticleCacheData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleTransformTrack TransformData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRichCurve> CurveData;
    
    CHAOSCACHING_API FPerParticleCacheData();
};

