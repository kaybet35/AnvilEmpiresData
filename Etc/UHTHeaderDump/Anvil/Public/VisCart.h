#pragma once
#include "CoreMinimal.h"
#include "VisVehicle.h"
#include "VisCart.generated.h"

UCLASS(Blueprintable)
class ANVIL_API AVisCart : public AVisVehicle {
    GENERATED_BODY()
public:
    AVisCart(const FObjectInitializer& ObjectInitializer);

};

