#pragma once
#include "CoreMinimal.h"
#include "ERayTracingGroupCullingPriority.generated.h"

UENUM(BlueprintType)
enum class ERayTracingGroupCullingPriority : uint8 {
    CP_0_NEVER_CULL,
    CP_1,
    CP_2,
    CP_3,
    CP_4_DEFAULT,
    CP_5,
    CP_6,
    CP_7,
    CP_8_QUICKLY_CULL,
};

