#pragma once
#include "CoreMinimal.h"
#include "ESwapRootBone.generated.h"

UENUM(BlueprintType)
enum class ESwapRootBone : uint8 {
    SwapRootBone_Component,
    SwapRootBone_Actor,
    SwapRootBone_None,
};

