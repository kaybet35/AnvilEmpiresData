#include "LightWeightInstanceBlueprintFunctionLibrary.h"

ULightWeightInstanceBlueprintFunctionLibrary::ULightWeightInstanceBlueprintFunctionLibrary() {
}

FActorInstanceHandle ULightWeightInstanceBlueprintFunctionLibrary::CreateNewLightWeightInstance(UClass* ActorClass, FTransform Transform, UDataLayerInstance* Layer, UWorld* World) {
    return FActorInstanceHandle{};
}

FActorInstanceHandle ULightWeightInstanceBlueprintFunctionLibrary::ConvertActorToLightWeightInstance(AActor* Actor) {
    return FActorInstanceHandle{};
}


