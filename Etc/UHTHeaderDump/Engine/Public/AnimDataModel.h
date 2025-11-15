#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimDataModelModifiedDynamicEventDelegate.h"
#include "AnimatedBoneAttribute.h"
#include "AnimationCurveData.h"
#include "BoneAnimationTrack.h"
#include "AnimDataModel.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class ENGINE_API UAnimDataModel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BracketCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimDataModelModifiedDynamicEvent ModifiedEventDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneAnimationTrack> BoneAnimationTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationCurveData CurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimatedBoneAttribute> AnimatedBoneAttributes;
    
public:
    UAnimDataModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidBoneTrackIndex(int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumBoneTracks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfTransformCurves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfFloatCurves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameRate GetFrameRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBoneTrackNames(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoneTrackIndexByName(FName TrackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoneTrackIndex(const FBoneAnimationTrack& Track) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoneAnimationTrack GetBoneTrackByName(FName TrackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoneAnimationTrack GetBoneTrackByIndex(int32 TrackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBoneAnimationTrack> GetBoneAnimationTracks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimationSequence() const;
    
};

