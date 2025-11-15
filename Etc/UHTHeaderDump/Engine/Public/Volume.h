#pragma once
#include "CoreMinimal.h"
#include "Brush.h"
#include "Volume.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API AVolume : public ABrush {
    GENERATED_BODY()
public:
    AVolume(const FObjectInitializer& ObjectInitializer);

};

