#pragma once
#include "CoreMinimal.h"
#include "EMaterialTranslucencyPass.generated.h"

UENUM(BlueprintType)
enum EMaterialTranslucencyPass {
    MTP_BeforeDOF,
    MTP_AfterDOF,
    MTP_AfterMotionBlur,
};

