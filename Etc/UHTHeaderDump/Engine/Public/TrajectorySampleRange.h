#pragma once
#include "CoreMinimal.h"
#include "TrajectorySample.h"
#include "TrajectorySampleRange.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTrajectorySampleRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrajectorySample> Samples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    FTrajectorySampleRange();
};

