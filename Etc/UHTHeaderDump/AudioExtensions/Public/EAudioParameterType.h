#pragma once
#include "CoreMinimal.h"
#include "EAudioParameterType.generated.h"

UENUM(BlueprintType)
enum class EAudioParameterType : uint8 {
    None,
    Boolean,
    Integer,
    Float,
    String,
    Object,
    NoneArray,
    BooleanArray,
    IntegerArray,
    FloatArray,
    StringArray,
    ObjectArray,
    COUNT,
};

