#pragma once
#include "CoreMinimal.h"
#include "EMakeBoxDataTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EMakeBoxDataTypeEnum : uint8 {
    Dataflow_MakeBox_DataType_MinMax,
    Dataflow_MakeBox_DataType_CenterSize,
};

