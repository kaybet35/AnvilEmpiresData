#pragma once
#include "CoreMinimal.h"
#include "EClusterConnectionTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EClusterConnectionTypeEnum : uint8 {
    Chaos_PointImplicit,
    Chaos_DelaunayTriangulation,
    Chaos_MinimalSpanningSubsetDelaunayTriangulation,
    Chaos_PointImplicitAugmentedWithMinimalDelaunay,
    Chaos_BoundsOverlapFilteredDelaunayTriangulation,
    Chaos_None,
    Chaos_EClsuterCreationParameters_Max UMETA(Hidden),
};

