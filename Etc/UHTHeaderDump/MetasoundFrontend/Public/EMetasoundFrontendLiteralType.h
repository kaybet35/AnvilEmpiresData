#pragma once
#include "CoreMinimal.h"
#include "EMetasoundFrontendLiteralType.generated.h"

UENUM(BlueprintType)
enum class EMetasoundFrontendLiteralType : uint8 {
    None,
    Boolean,
    Integer,
    Float,
    String,
    UObject,
    NoneArray,
    BooleanArray,
    IntegerArray,
    FloatArray,
    StringArray,
    UObjectArray,
    Invalid,
};

