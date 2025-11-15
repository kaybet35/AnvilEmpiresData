#pragma once
#include "CoreMinimal.h"
#include "EQuartzTimeSignatureQuantization.h"
#include "QuartzPulseOverrideStep.h"
#include "QuartzTimeSignature.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FQuartzTimeSignature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuartzTimeSignatureQuantization BeatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuartzPulseOverrideStep> OptionalPulseOverride;
    
    FQuartzTimeSignature();
};

