#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "ActiveCameraAnimationInfo.h"
#include "CameraAnimationHandle.h"
#include "CameraAnimationParams.h"
#include "CameraAnimationCameraModifier.generated.h"

class APlayerController;
class UCameraAnimationCameraModifier;
class UCameraAnimationSequence;
class UObject;

UCLASS(Blueprintable, Config=Camera)
class GAMEPLAYCAMERAS_API UCameraAnimationCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveCameraAnimationInfo> ActiveAnimations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NextInstanceSerialNumber;
    
public:
    UCameraAnimationCameraModifier();

    UFUNCTION(BlueprintCallable)
    void StopCameraAnimation(const FCameraAnimationHandle& Handle, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraAnimationsOf(UCameraAnimationSequence* Sequence, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraAnimations(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    FCameraAnimationHandle PlayCameraAnimation(UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraAnimationActive(const FCameraAnimationHandle& Handle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(const UObject* WorldContextObject, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(const UObject* WorldContextObject, int32 PlayerIndex);
    
};

