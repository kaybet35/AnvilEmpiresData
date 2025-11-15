#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "BlockingVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    ABlockingVolume(const FObjectInitializer& ObjectInitializer);

};

