#pragma once
#include "CoreMinimal.h"
#include "EAnvilAvatarOwnerType.generated.h"

UENUM(BlueprintType)
enum class EAnvilAvatarOwnerType : uint8 {
    Personal,
    Family,
    Public,
    NumTypes,
};

