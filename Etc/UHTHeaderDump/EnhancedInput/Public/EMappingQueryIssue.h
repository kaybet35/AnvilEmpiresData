#pragma once
#include "CoreMinimal.h"
#include "EMappingQueryIssue.generated.h"

UENUM(BlueprintType)
enum class EMappingQueryIssue : uint8 {
    NoIssue,
    ReservedByAction,
    HidesExistingMapping,
    HiddenByExistingMapping = 4,
    CollisionWithMappingInSameContext = 8,
    ForcesTypePromotion = 16,
    ForcesTypeDemotion = 32,
};

