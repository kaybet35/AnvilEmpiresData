#pragma once
#include "CoreMinimal.h"
#include "ELayeredBoneBlendMode.generated.h"

UENUM(BlueprintType)
enum class ELayeredBoneBlendMode : uint8 {
    BranchFilter,
    BlendMask,
};

