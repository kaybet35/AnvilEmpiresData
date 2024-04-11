#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MinimalViewInfo -FallbackName=MinimalViewInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "SequenceCameraShakeTestUtil.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequenceCameraShakeTestUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPostProcessBlendCache(APlayerController* PlayerController, int32 PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMinimalViewInfo GetLastFrameCameraCachePOV(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMinimalViewInfo GetCameraCachePOV(APlayerController* PlayerController);
    
};

