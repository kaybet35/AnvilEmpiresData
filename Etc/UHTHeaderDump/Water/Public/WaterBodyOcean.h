#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyOcean.generated.h"

UCLASS(Blueprintable)
class WATER_API AWaterBodyOcean : public AWaterBody {
    GENERATED_BODY()
public:
    AWaterBodyOcean(const FObjectInitializer& ObjectInitializer);

};

