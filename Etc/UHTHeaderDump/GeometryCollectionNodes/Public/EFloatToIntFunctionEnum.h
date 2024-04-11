#pragma once
#include "CoreMinimal.h"
#include "EFloatToIntFunctionEnum.generated.h"

UENUM(BlueprintType)
enum class EFloatToIntFunctionEnum : uint8 {
    Dataflow_FloatToInt_Function_Floor,
    Dataflow_FloatToInt_Function_Ceil,
    Dataflow_FloatToInt_Function_Round,
    Dataflow_FloatToInt_Function_Truncate,
};

