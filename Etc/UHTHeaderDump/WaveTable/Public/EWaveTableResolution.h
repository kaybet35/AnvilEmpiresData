#pragma once
#include "CoreMinimal.h"
#include "EWaveTableResolution.generated.h"

UENUM(BlueprintType)
enum class EWaveTableResolution : uint8 {
    None,
    Res_8 = 3,
    Res_16,
    Res_32,
    Res_64,
    Res_128,
    Res_256,
    Res_512,
    Res_1024,
    Res_2048,
    Res_4096,
    Res_Max = Res_4096 UMETA(Hidden),
    Maximum,
};

