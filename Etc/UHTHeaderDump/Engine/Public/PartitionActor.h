#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "PartitionActor.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API APartitionActor : public AActor {
    GENERATED_BODY()
public:
    APartitionActor(const FObjectInitializer& ObjectInitializer);

};

