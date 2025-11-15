#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "ServerStreamingLevelsVisibility.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class ENGINE_API AServerStreamingLevelsVisibility : public AActor {
    GENERATED_BODY()
public:
    AServerStreamingLevelsVisibility(const FObjectInitializer& ObjectInitializer);

};

