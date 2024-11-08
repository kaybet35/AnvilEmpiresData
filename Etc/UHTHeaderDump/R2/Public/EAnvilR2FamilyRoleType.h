#pragma once
#include "CoreMinimal.h"
#include "EAnvilR2FamilyRoleType.generated.h"

UENUM(BlueprintType)
enum class EAnvilR2FamilyRoleType : uint8 {
    Guest,
    Member,
    Manager,
    Founder,
    NumTypes,
};

