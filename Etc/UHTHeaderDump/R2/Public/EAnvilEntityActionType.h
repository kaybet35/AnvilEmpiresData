#pragma once
#include "CoreMinimal.h"
#include "EAnvilEntityActionType.generated.h"

UENUM(BlueprintType)
enum class EAnvilEntityActionType : uint8 {
    None,
    UpvoteSignPost,
    DownvoteSignPost,
    CancelVoteSignPost,
    NumTypes,
};

