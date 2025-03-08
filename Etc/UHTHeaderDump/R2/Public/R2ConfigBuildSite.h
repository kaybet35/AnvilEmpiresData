#pragma once
#include "CoreMinimal.h"
#include "R2ConfigBuildSiteDistanceRule.h"
#include "R2ConfigBuildSite.generated.h"

USTRUCT(BlueprintType)
struct FR2ConfigBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR2ConfigBuildSiteDistanceRule> BuildSiteDistanceRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FamilyStructureWorldEntranceAvoidDist;
    
    R2_API FR2ConfigBuildSite();
};

