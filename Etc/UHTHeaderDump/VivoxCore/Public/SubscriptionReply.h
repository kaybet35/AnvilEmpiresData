#pragma once
#include "CoreMinimal.h"
#include "SubscriptionReply.generated.h"

UENUM(BlueprintType)
enum class SubscriptionReply : uint8 {
    Allow,
    Block,
};

