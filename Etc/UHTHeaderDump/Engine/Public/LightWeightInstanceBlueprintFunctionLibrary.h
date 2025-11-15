#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ActorInstanceHandle.h"
#include "BlueprintFunctionLibrary.h"
#include "LightWeightInstanceBlueprintFunctionLibrary.generated.h"

class AActor;
class UDataLayerInstance;
class UWorld;

UCLASS(Blueprintable)
class ENGINE_API ULightWeightInstanceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULightWeightInstanceBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FActorInstanceHandle CreateNewLightWeightInstance(UClass* ActorClass, FTransform Transform, UDataLayerInstance* Layer, UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FActorInstanceHandle ConvertActorToLightWeightInstance(AActor* Actor);
    
};

