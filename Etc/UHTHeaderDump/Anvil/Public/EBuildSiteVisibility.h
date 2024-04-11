#pragma once
#include "CoreMinimal.h"
#include "EBuildSiteVisibility.generated.h"

UENUM(BlueprintType)
enum class EBuildSiteVisibility : uint8 {
    AlwaysVisible,
    PlayInEditorOnly,
    Never,
    NumTypes,
};

