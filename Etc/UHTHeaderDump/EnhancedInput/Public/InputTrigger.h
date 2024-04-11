#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETriggerState.h"
#include "ETriggerType.h"
#include "InputActionValue.h"
#include "InputTrigger.generated.h"

class UEnhancedPlayerInput;

UCLASS(Abstract, Blueprintable, CollapseCategories, ConfigDoNotCheckDefaults, DefaultConfig, EditInlineNew, Config=Input)
class ENHANCEDINPUT_API UInputTrigger : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActuationThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAlwaysTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionValue LastValue;
    
    UInputTrigger();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETriggerState UpdateState(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActuated(const FInputActionValue& ForValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ETriggerType GetTriggerType() const;
    
};

