#pragma once
#include "CoreMinimal.h"
#include "WinConditionTweakables.generated.h"

USTRUCT(BlueprintType)
struct FWinConditionTweakables {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumCapturedKeepsForMilitaryVictory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumTemplesForCultureVictory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CultureVictoryTimeRequiredSec;
    
    ANVIL_API FWinConditionTweakables();
};

