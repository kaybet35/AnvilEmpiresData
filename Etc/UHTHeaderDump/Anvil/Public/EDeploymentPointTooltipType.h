#pragma once
#include "CoreMinimal.h"
#include "EDeploymentPointTooltipType.generated.h"

UENUM(BlueprintType)
enum class EDeploymentPointTooltipType : uint8 {
    None,
    Wild,
    TownCenterMilitia,
    FortressMilitia,
    CampMilitia,
    SmallCampMilitia,
    TownCenter,
    Fortress,
    FamilyCenter,
    Camp,
    SmallCamp,
};

