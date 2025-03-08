#pragma once
#include "CoreMinimal.h"
#include "VictoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FVictoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VictorTeamId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 VictoryUnixTimeStamp;
    
    R2_API FVictoryInfo();
};

