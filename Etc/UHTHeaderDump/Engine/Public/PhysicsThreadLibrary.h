#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BlueprintFunctionLibrary.h"
#include "BodyInstanceAsyncPhysicsTickHandle.h"
#include "PhysicsThreadLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UPhysicsThreadLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhysicsThreadLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void AddForce(FBodyInstanceAsyncPhysicsTickHandle Handle, FVector Force, bool bAccelChange);
    
};

