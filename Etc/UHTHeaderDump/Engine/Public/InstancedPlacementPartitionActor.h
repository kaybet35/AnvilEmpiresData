#pragma once
#include "CoreMinimal.h"
#include "ISMPartitionActor.h"
#include "InstancedPlacementPartitionActor.generated.h"

UCLASS(Blueprintable)
class ENGINE_API AInstancedPlacementPartitionActor : public AISMPartitionActor {
    GENERATED_BODY()
public:
    AInstancedPlacementPartitionActor(const FObjectInitializer& ObjectInitializer);

};

