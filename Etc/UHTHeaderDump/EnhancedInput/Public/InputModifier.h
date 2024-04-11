#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputActionValue.h"
#include "InputModifier.generated.h"

class UEnhancedPlayerInput;

UCLASS(Abstract, Blueprintable, CollapseCategories, ConfigDoNotCheckDefaults, DefaultConfig, EditInlineNew, Config=Input)
class ENHANCEDINPUT_API UInputModifier : public UObject {
    GENERATED_BODY()
public:
    UInputModifier();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FInputActionValue ModifyRaw(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue) const;
    
};

