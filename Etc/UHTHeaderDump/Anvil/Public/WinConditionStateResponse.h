#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R2 -ObjectName=VictoryInfo -FallbackName=VictoryInfo
#include "WinConditionTweakables.h"
#include "WinConditionStateResponse.generated.h"

USTRUCT(BlueprintType)
struct FWinConditionStateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StateVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVictoryInfo VictoryInfoList[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FactionTotalNumCapturedKeeps[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FactionTotalNumTemples[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float FactionTotalInfluence[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 FactionTotalNumRelicSites[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumTotalRelicSites;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 FactionUnixTimestampCultureVictoryStarted[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWinConditionTweakables Tweakables;
    
    ANVIL_API FWinConditionStateResponse();
};

