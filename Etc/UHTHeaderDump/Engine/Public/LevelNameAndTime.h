#pragma once
#include "CoreMinimal.h"
#include "LevelNameAndTime.generated.h"

USTRUCT(BlueprintType)
struct FLevelNameAndTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LevelChangeTimeInMS;
    
    ENGINE_API FLevelNameAndTime();
};

