#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EInputActionValueType.h"
#include "InputActionValue.h"
#include "EnhancedInputLibrary.generated.h"

class AActor;
class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable)
class ENHANCEDINPUT_API UEnhancedInputLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnhancedInputLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void RequestRebuildControlMappingsUsingContext(const UInputMappingContext* Context, bool bForceImmediately);
    
    UFUNCTION(BlueprintPure)
    static FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, const EInputActionValueType ValueType);
    
    UFUNCTION(BlueprintPure)
    static FInputActionValue MakeInputActionValue(double X, double Y, double Z, const FInputActionValue& MatchValueType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputActionValue GetBoundActionValue(AActor* Actor, const UInputAction* Action);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_InputActionValueToString(FInputActionValue ActionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Conv_InputActionValueToBool(FInputActionValue InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue);
    
    UFUNCTION(BlueprintPure)
    static double Conv_InputActionValueToAxis1D(FInputActionValue InValue);
    
    UFUNCTION(BlueprintPure)
    static void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type);
    
};

