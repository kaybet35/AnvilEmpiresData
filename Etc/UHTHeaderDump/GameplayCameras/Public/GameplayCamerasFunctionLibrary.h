#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
#include "ECameraAnimationPlaySpace.h"
#include "GameplayCamerasFunctionLibrary.generated.h"

class APlayerCameraManager;
class UCameraAnimationCameraModifier;

UCLASS(Blueprintable)
class GAMEPLAYCAMERAS_API UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayCamerasFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(APlayerCameraManager* PlayerCameraManager);
    
};

