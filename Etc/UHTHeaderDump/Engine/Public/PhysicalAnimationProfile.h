#pragma once
#include "CoreMinimal.h"
#include "PhysicalAnimationData.h"
#include "PhysicalAnimationProfile.generated.h"

USTRUCT(BlueprintType)
struct FPhysicalAnimationProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicalAnimationData PhysicalAnimationData;
    
    ENGINE_API FPhysicalAnimationProfile();
};

