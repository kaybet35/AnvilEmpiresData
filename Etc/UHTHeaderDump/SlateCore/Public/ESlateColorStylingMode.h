#pragma once
#include "CoreMinimal.h"
#include "ESlateColorStylingMode.generated.h"

UENUM(BlueprintType)
enum class ESlateColorStylingMode : uint8 {
    UseColor_Specified,
    UseColor_ColorTable,
    UseColor_Foreground,
    UseColor_Foreground_Subdued,
    UseColor_UseStyle,
};

