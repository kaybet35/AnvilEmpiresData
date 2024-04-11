#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyRiver.generated.h"

UCLASS(Blueprintable)
class WATER_API AWaterBodyRiver : public AWaterBody {
    GENERATED_BODY()
public:
    AWaterBodyRiver(const FObjectInitializer& ObjectInitializer);

};

