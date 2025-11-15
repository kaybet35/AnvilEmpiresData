#pragma once
#include "CoreMinimal.h"
#include "EMeshMergeType.generated.h"

UENUM(BlueprintType)
enum class EMeshMergeType : uint8 {
    MeshMergeType_Default,
    MeshMergeType_MergeActor,
};

