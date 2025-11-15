#pragma once
#include "CoreMinimal.h"
#include "EMeshApproximationGroundPlaneClippingPolicy.generated.h"

UENUM(BlueprintType)
enum class EMeshApproximationGroundPlaneClippingPolicy : uint8 {
    NoGroundClipping,
    DiscardWithZPlane,
    CutWithZPlane,
    CutAndFillWithZPlane,
};

