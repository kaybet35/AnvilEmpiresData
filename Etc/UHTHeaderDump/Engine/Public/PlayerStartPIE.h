#pragma once
#include "CoreMinimal.h"
#include "PlayerStart.h"
#include "PlayerStartPIE.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class APlayerStartPIE : public APlayerStart {
    GENERATED_BODY()
public:
    APlayerStartPIE(const FObjectInitializer& ObjectInitializer);

};

