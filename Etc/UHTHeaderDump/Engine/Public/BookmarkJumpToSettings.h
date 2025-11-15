#pragma once
#include "CoreMinimal.h"
#include "BookmarkBaseJumpToSettings.h"
#include "BookmarkJumpToSettings.generated.h"

USTRUCT(BlueprintType)
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings {
    GENERATED_BODY()
public:
    ENGINE_API FBookmarkJumpToSettings();
};

