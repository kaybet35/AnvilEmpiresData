#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "CameraLensInterfaceClassSupport.h"
#include "EInterfaceValidResult.h"
#include "Templates/SubclassOf.h"
#include "CameraLensEffectInterfaceClassSupportLibrary.generated.h"

class AActor;
class ICameraLensEffectInterface;
class UCameraLensEffectInterface;

UCLASS(Blueprintable)
class UCameraLensEffectInterfaceClassSupportLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraLensEffectInterfaceClassSupportLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetInterfaceClass(TSubclassOf<AActor> Class, UPARAM(Ref) FCameraLensInterfaceClassSupport& Var, EInterfaceValidResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void IsInterfaceValid(const TScriptInterface<ICameraLensEffectInterface>& CameraLens, EInterfaceValidResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void IsInterfaceClassValid(const FCameraLensInterfaceClassSupport& CameraLens, EInterfaceValidResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<AActor> GetInterfaceClass(const FCameraLensInterfaceClassSupport& CameraLens);
    
};

