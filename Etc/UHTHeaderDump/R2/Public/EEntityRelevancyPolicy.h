#pragma once
#include "CoreMinimal.h"
#include "EEntityRelevancyPolicy.generated.h"

UENUM(BlueprintType)
enum class EEntityRelevancyPolicy : uint8 {
    DistanceBased,
    AlwaysRelevant,
    AlwaysRelevantToFriendlyOnly,
    AlwaysRelevantToFriendlyOrDistanceBased,
    OwnerOnly,
};

