#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SubmixEffectDelaySettings.h"
#include "SubmixEffectDelayStatics.generated.h"

UCLASS(Blueprintable)
class SYNTHESIS_API USubmixEffectDelayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USubmixEffectDelayStatics();

    UFUNCTION(BlueprintCallable)
    static FSubmixEffectDelaySettings SetMaximumDelayLength(UPARAM(Ref) FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength);
    
    UFUNCTION(BlueprintCallable)
    static FSubmixEffectDelaySettings SetInterpolationTime(UPARAM(Ref) FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime);
    
    UFUNCTION(BlueprintCallable)
    static FSubmixEffectDelaySettings SetDelayLength(UPARAM(Ref) FSubmixEffectDelaySettings& DelaySettings, float DelayLength);
    
};

