#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputComponent -FallbackName=InputComponent
#include "InputActionValue.h"
#include "EnhancedInputComponent.generated.h"

class UInputAction;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENHANCEDINPUT_API UEnhancedInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
    UEnhancedInputComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputActionValue GetBoundActionValue(const UInputAction* Action) const;
    
};

