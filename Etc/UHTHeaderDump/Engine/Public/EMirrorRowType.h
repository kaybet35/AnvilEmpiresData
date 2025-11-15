#pragma once
#include "CoreMinimal.h"
#include "EMirrorRowType.generated.h"

UENUM(BlueprintType)
namespace EMirrorRowType {
    enum Type {
        Bone,
        AnimationNotify,
        Curve,
        SyncMarker,
        Custom,
    };
}

