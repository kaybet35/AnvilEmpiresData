#pragma once
#include "CoreMinimal.h"
#include "AudioCodecEncoderSettings.h"
#include "EPcmBitDepthConversion.h"
#include "AudioPcmEncoderSettings.generated.h"

UCLASS(Blueprintable)
class AUDIOEXTENSIONS_API UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPcmBitDepthConversion BitDepthConversion;
    
    UAudioPcmEncoderSettings();

};

