#pragma once
#include "CoreMinimal.h"
#include "QuartzTimeSignature.h"
#include "QuartzClockSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FQuartzClockSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuartzTimeSignature TimeSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreLevelChange;
    
    FQuartzClockSettings();
};

