#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAudioFinished__DelegateSignature -FallbackName=OnAudioFinishedDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAudioPlaybackPercent__DelegateSignature -FallbackName=OnAudioPlaybackPercentDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQueueSubtitles__DelegateSignature -FallbackName=OnQueueSubtitlesDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneAudioTriggerChannel -FallbackName=MovieSceneAudioTriggerChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolChannel -FallbackName=MovieSceneBoolChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneActorReferenceData.h"
#include "MovieSceneStringChannel.h"
#include "MovieSceneAudioSection.generated.h"

class USoundAttenuation;
class USoundBase;

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneAudioSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioDilationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioVolume;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMovieSceneFloatChannel> Inputs_Float;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMovieSceneStringChannel> Inputs_String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMovieSceneBoolChannel> Inputs_Bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMovieSceneIntegerChannel> Inputs_Int;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMovieSceneAudioTriggerChannel> Inputs_Trigger;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData AttachActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQueueSubtitles OnQueueSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioPlaybackPercent OnAudioPlaybackPercent;
    
public:
    UMovieSceneAudioSection();

    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundBase* InSound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetSound() const;
    
};

