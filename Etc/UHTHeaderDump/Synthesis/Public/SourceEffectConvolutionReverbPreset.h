#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "ESubmixEffectConvolutionReverbBlockSize.h"
#include "SourceEffectConvolutionReverbSettings.h"
#include "SourceEffectConvolutionReverbPreset.generated.h"

class UAudioImpulseResponse;

UCLASS(Blueprintable, EditInlineNew)
class SYNTHESIS_API USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioImpulseResponse* ImpulseResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectConvolutionReverbSettings Settings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixEffectConvolutionReverbBlockSize BlockSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHardwareAcceleration;
    
    USourceEffectConvolutionReverbPreset();

    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectConvolutionReverbSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);
    
};

