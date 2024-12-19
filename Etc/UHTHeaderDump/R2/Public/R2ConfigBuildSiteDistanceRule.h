#pragma once
#include "CoreMinimal.h"
#include "EAnvilPlacementStatus.h"
#include "EAnvilTrinaryRequirement.h"
#include "Templates/SubclassOf.h"
#include "R2ConfigBuildSiteDistanceRule.generated.h"

class UEntityTemplate;

USTRUCT(BlueprintType)
struct FR2ConfigBuildSiteDistanceRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEntityTemplate>> BuildSites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWithinTownRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeighbourLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilTrinaryRequirement FriendlyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilPlacementStatus ErrorCode;
    
    R2_API FR2ConfigBuildSiteDistanceRule();
};

