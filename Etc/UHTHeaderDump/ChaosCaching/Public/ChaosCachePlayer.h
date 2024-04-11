#pragma once
#include "CoreMinimal.h"
#include "ChaosCacheManager.h"
#include "ChaosCachePlayer.generated.h"

UCLASS(Blueprintable)
class CHAOSCACHING_API AChaosCachePlayer : public AChaosCacheManager {
    GENERATED_BODY()
public:
    AChaosCachePlayer(const FObjectInitializer& ObjectInitializer);

};

