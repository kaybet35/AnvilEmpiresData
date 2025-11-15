#pragma once
#include "CoreMinimal.h"
#include "DistributionFloatParameterBase.h"
#include "DistributionFloatParticleParameter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatParticleParameter : public UDistributionFloatParameterBase {
    GENERATED_BODY()
public:
    UDistributionFloatParticleParameter();

};

