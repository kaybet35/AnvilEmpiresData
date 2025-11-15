#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ActorComponent.h"
#include "CachedKeyToActionInfo.h"
#include "EControllerAnalogStick.h"
#include "EEndPlayReason.h"
#include "InputComponent.generated.h"

class AActor;

UCLASS(Blueprintable, Transient, ClassGroup=Custom, Config=Input, meta=(BlueprintSpawnableComponent))
class ENGINE_API UInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo;
    
public:
    UInputComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasControllerKeyJustReleased(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasControllerKeyJustPressed(FKey Key) const;
    
    UFUNCTION(BlueprintCallable)
    void OnInputOwnerEndPlayed(AActor* InOwner, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerKeyDown(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTouchState(int32 FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetControllerVectorKeyState(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetControllerMouseDelta(float& DeltaX, float& DeltaY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerKeyTimeDown(FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick::Type> WhichStick, float& StickX, float& StickY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerAnalogKeyState(FKey Key) const;
    
};

