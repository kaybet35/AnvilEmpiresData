#pragma once
#include "CoreMinimal.h"
#include "EAudioVolumeLocationState.h"
#include "SoundSubmixSendInfo.h"
#include "AudioVolumeSubmixSendSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAudioVolumeSubmixSendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioVolumeLocationState ListenerLocationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioVolumeLocationState SourceLocationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundSubmixSendInfo> SubmixSends;
    
    FAudioVolumeSubmixSendSettings();
};

