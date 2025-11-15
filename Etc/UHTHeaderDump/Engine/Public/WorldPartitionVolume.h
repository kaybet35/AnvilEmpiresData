#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "WorldPartitionVolume.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable)
class ENGINE_API ADEPRECATED_WorldPartitionVolume : public AVolume {
    GENERATED_BODY()
public:
    ADEPRECATED_WorldPartitionVolume(const FObjectInitializer& ObjectInitializer);

};

