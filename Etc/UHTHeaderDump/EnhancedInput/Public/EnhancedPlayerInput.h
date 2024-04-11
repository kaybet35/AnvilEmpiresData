#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerInput -FallbackName=PlayerInput
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EnhancedActionKeyMapping.h"
#include "InjectedInputArray.h"
#include "InputActionInstance.h"
#include "EnhancedPlayerInput.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable, NonTransient)
class ENHANCEDINPUT_API UEnhancedPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UInputMappingContext*, int32> AppliedInputContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEnhancedActionKeyMapping> EnhancedActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, FInputActionInstance> ActionInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKey, FVector> KeysPressedThisTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, FInjectedInputArray> InputsInjectedThisTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UInputAction*> LastInjectedActions;
    
public:
    UEnhancedPlayerInput();

};

