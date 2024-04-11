#pragma once
#include "CoreMinimal.h"
#include "ESwapAudioOutputDeviceResultState.h"
#include "SwapAudioOutputResult.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSwapAudioOutputResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentDeviceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestedDeviceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwapAudioOutputDeviceResultState Result;
    
    FSwapAudioOutputResult();
};

