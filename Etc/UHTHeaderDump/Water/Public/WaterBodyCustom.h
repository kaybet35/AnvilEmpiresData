#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyCustom.generated.h"

UCLASS(Blueprintable)
class WATER_API AWaterBodyCustom : public AWaterBody {
    GENERATED_BODY()
public:
    AWaterBodyCustom(const FObjectInitializer& ObjectInitializer);

};

