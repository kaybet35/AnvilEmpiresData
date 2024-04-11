#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ISMPartitionActor -FallbackName=ISMPartitionActor
#include "InstancedFoliageActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AInstancedFoliageActor : public AISMPartitionActor {
    GENERATED_BODY()
public:
    AInstancedFoliageActor(const FObjectInitializer& ObjectInitializer);

};

