#pragma once
#include "CoreMinimal.h"
#include "HitInfo.h"
#include "RayCastResult.generated.h"

USTRUCT(BlueprintType)
struct FRayCastResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBlockingHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitInfo BlockingHit;
    
    R2_API FRayCastResult();
};

