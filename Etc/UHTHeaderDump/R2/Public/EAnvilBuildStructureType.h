#pragma once
#include "CoreMinimal.h"
#include "EAnvilBuildStructureType.generated.h"

UENUM(BlueprintType)
enum class EAnvilBuildStructureType : uint8 {
    Monolithic,
    Foundations,
    Modular,
    FoundationCeiling,
    FoundationWall,
    FoundationModular,
    MonolithicModular,
};

