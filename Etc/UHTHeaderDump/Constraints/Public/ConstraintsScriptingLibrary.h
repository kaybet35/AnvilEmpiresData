#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ETransformConstraintType -FallbackName=ETransformConstraintType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ConstraintsScriptingLibrary.generated.h"

class UConstraintsManager;
class USceneComponent;
class UTickableTransformConstraint;
class UTransformableComponentHandle;
class UTransformableHandle;
class UWorld;

UCLASS(Blueprintable)
class CONSTRAINTS_API UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConstraintsScriptingLibrary();

    UFUNCTION(BlueprintCallable)
    static bool RemoveConstraint(UWorld* InWorld, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static UConstraintsManager* GetManager(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    static UTransformableComponentHandle* CreateTransformableComponentHandle(UWorld* InWorld, USceneComponent* InSceneComponent, const FName& InSocketName);
    
    UFUNCTION(BlueprintCallable)
    static UTickableTransformConstraint* CreateFromType(UWorld* InWorld, const ETransformConstraintType InType);
    
    UFUNCTION(BlueprintCallable)
    static bool AddConstraint(UWorld* InWorld, UTransformableHandle* InParentHandle, UTransformableHandle* InChildHandle, UTickableTransformConstraint* InConstraint, const bool bMaintainOffset);
    
};

