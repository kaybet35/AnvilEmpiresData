#pragma once
#include "CoreMinimal.h"
#include "EAudioRecordingExportType.h"
#include "EAudioSpectrumType.h"
#include "EFFTPeakInterpolationMethod.h"
#include "EFFTSize.h"
#include "EFFTWindowType.h"
#include "OnSubmixEnvelopeBPDelegate.h"
#include "OnSubmixRecordedFileDoneDelegate.h"
#include "OnSubmixSpectralAnalysisBPDelegate.h"
#include "SoundModulationDestinationSettings.h"
#include "SoundSubmixSpectralAnalysisBandSettings.h"
#include "SoundSubmixWithParentBase.h"
#include "SoundSubmix.generated.h"

class UAudioLinkSettingsAbstract;
class UObject;
class USoundEffectSubmixPreset;
class USoundWave;
class USoundfieldEncodingSettingsBase;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USoundSubmix : public USoundSubmixWithParentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMuteWhenBackgrounded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutputVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings OutputVolumeModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings WetLevelModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundModulationDestinationSettings DryLevelModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSendToAudioLink: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioLinkSettingsAbstract* AudioLinkSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubmixRecordedFileDone OnSubmixRecordedFileDone;
    
    USoundSubmix();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StopSpectralAnalysis(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, const FString& Name, const FString& Path, USoundWave* ExistingSoundWaveToOverwrite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StopEnvelopeFollowing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StartSpectralAnalysis(const UObject* WorldContextObject, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StartEnvelopeFollowing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetSubmixWetLevel(const UObject* WorldContextObject, float InWetLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetSubmixOutputVolume(const UObject* WorldContextObject, float InOutputVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetSubmixDryLevel(const UObject* WorldContextObject, float InDryLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void RemoveSpectralAnalysisDelegate(const UObject* WorldContextObject, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AddSpectralAnalysisDelegate(const UObject* WorldContextObject, const TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const FOnSubmixEnvelopeBP& OnSubmixEnvelopeBP);
    
};

