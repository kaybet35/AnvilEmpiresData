#pragma once
#include "CoreMinimal.h"
#include "BodySetup.h"
#include "PhysicalAnimationProfile.h"
#include "SkeletalBodySetup.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class USkeletalBodySetup : public UBodySetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipScaleFromAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicalAnimationProfile> PhysicalAnimationData;
    
public:
    USkeletalBodySetup();

};

