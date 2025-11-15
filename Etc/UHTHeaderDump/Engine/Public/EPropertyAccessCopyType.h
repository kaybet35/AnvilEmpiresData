#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessCopyType.generated.h"

UENUM(BlueprintType)
enum class EPropertyAccessCopyType : uint8 {
    None,
    Plain,
    Complex,
    Bool,
    Struct,
    Object,
    Name,
    Array,
    PromoteBoolToByte,
    PromoteBoolToInt32,
    PromoteBoolToInt64,
    PromoteBoolToFloat,
    PromoteBoolToDouble,
    PromoteByteToInt32,
    PromoteByteToInt64,
    PromoteByteToFloat,
    PromoteByteToDouble,
    PromoteInt32ToInt64,
    PromoteInt32ToFloat,
    PromoteInt32ToDouble,
    PromoteFloatToDouble,
    DemoteDoubleToFloat,
    PromoteArrayFloatToDouble,
    DemoteArrayDoubleToFloat,
    PromoteMapValueFloatToDouble,
    DemoteMapValueDoubleToFloat,
};

