#pragma once
#include "CoreMinimal.h"
#include "SoundTimecodeOffset.generated.h"

USTRUCT(BlueprintType)
struct FSoundTimecodeOffset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NumOfSecondsSinceMidnight;
    
    ENGINE_API FSoundTimecodeOffset();
};

