#pragma once
#include "CoreMinimal.h"
#include "VisVehicle.h"
#include "VisSiegeTower.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AVisSiegeTower : public AVisVehicle {
    GENERATED_BODY()
public:
    AVisSiegeTower(const FObjectInitializer& ObjectInitializer);

};

