#pragma once
#include "CoreMinimal.h"
#include "LevelInstance.h"
#include "PackedLevelActor.generated.h"

UCLASS(Blueprintable)
class ENGINE_API APackedLevelActor : public ALevelInstance {
    GENERATED_BODY()
public:
    APackedLevelActor(const FObjectInitializer& ObjectInitializer);

};

