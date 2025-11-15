#pragma once
#include "CoreMinimal.h"
#include "PhysicsVolume.h"
#include "KillZVolume.generated.h"

UCLASS(Blueprintable)
class ENGINE_API AKillZVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    AKillZVolume(const FObjectInitializer& ObjectInitializer);

};

