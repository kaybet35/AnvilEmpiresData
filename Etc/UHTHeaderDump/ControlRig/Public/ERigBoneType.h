#pragma once
#include "CoreMinimal.h"
#include "ERigBoneType.generated.h"

UENUM(BlueprintType)
enum class ERigBoneType : uint8 {
    Imported,
    User,
};

