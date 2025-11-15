#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "WorldPartitionMiniMapVolume.generated.h"

UCLASS(Blueprintable)
class ENGINE_API AWorldPartitionMiniMapVolume : public AVolume {
    GENERATED_BODY()
public:
    AWorldPartitionMiniMapVolume(const FObjectInitializer& ObjectInitializer);

};

