#pragma once
#include "CoreMinimal.h"
#include "EDeploymentPointTooltipType.generated.h"

UENUM(BlueprintType)
enum class EDeploymentPointTooltipType : uint8 {
    None,
    Wild,
    TownCenterWild,
    TownCenterMilitia,
    CampMilitia,
    SmallCampMilitia,
    TownCenter,
    FamilyCenter,
    Camp,
    SmallCamp,
};
