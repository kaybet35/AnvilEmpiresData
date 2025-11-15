#pragma once
#include "CoreMinimal.h"
#include "StaticParameterSetRuntimeData.h"
#include "StaticParameterSet.generated.h"

USTRUCT(BlueprintType)
struct FStaticParameterSet : public FStaticParameterSetRuntimeData {
    GENERATED_BODY()
public:
    ENGINE_API FStaticParameterSet();
};

