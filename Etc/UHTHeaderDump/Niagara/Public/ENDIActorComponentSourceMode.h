#pragma once
#include "CoreMinimal.h"
#include "ENDIActorComponentSourceMode.generated.h"

UENUM(BlueprintType)
enum class ENDIActorComponentSourceMode : uint8 {
    Default,
    AttachParent,
    LocalPlayer,
};

