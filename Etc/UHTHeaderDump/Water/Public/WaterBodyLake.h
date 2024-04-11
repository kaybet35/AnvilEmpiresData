#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyLake.generated.h"

UCLASS(Blueprintable)
class WATER_API AWaterBodyLake : public AWaterBody {
    GENERATED_BODY()
public:
    AWaterBodyLake(const FObjectInitializer& ObjectInitializer);

};

