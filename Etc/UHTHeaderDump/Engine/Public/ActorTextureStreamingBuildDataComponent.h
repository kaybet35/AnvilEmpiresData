#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "ActorTextureStreamingBuildDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UActorTextureStreamingBuildDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UActorTextureStreamingBuildDataComponent(const FObjectInitializer& ObjectInitializer);

};

