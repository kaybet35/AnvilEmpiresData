#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimInstance.h"
#include "PostEvaluateAnimEventDelegate.h"
#include "AnimSingleNodeInstance.generated.h"

class UAnimationAsset;
class UMirrorDataTable;

UCLASS(Blueprintable, NonTransient)
class ENGINE_API UAnimSingleNodeInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* CurrentAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPostEvaluateAnimEvent PostEvaluateAnimEvent;
    
    UAnimSingleNodeInstance();

    UFUNCTION(BlueprintCallable)
    void StopAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetReverse(bool bInReverse);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewCurveOverride(const FName& PoseName, float Value, bool bRemoveIfZero);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(float InPosition, bool bFireNotifies);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaying(bool bIsPlaying);
    
    UFUNCTION(BlueprintCallable)
    void SetMirrorDataTable(const UMirrorDataTable* MirrorDataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(bool bIsLooping);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpacePosition(const FVector& InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
    
    UFUNCTION(BlueprintCallable)
    UMirrorDataTable* GetMirrorDataTable();
    
    UFUNCTION(BlueprintCallable)
    float GetLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimationAsset* GetAnimationAsset() const;
    
};

