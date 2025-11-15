#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "VisualLoggerFilterVolume.generated.h"

UCLASS(Blueprintable)
class ENGINE_API AVisualLoggerFilterVolume : public AVolume {
    GENERATED_BODY()
public:
    AVisualLoggerFilterVolume(const FObjectInitializer& ObjectInitializer);

};

