#pragma once
#include "CoreMinimal.h"
#include "EAnvilVictoryType.h"
#include "VictoryInfo.h"
#include "VictoryInfoUpdate.generated.h"

USTRUCT(BlueprintType)
struct FVictoryInfoUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnvilVictoryType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVictoryInfo Info;
    
    R2_API FVictoryInfoUpdate();
};

