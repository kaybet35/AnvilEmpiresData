#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandQuantization.h"
#include "EQuarztQuantizationReference.h"
#include "QuartzQuantizationBoundary.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FQuartzQuantizationBoundary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuartzCommandQuantization Quantization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuarztQuantizationReference CountingReferencePoint;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireOnClockStart;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelCommandIfClockIsNotRunning;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetClockOnQueued;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResumeClockOnQueued;
    
    FQuartzQuantizationBoundary();
};

