#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "ParticleEventManager.generated.h"

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class AParticleEventManager : public AActor {
    GENERATED_BODY()
public:
    AParticleEventManager(const FObjectInitializer& ObjectInitializer);

};

