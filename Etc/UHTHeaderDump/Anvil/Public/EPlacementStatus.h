#pragma once
#include "CoreMinimal.h"
#include "EPlacementStatus.generated.h"

UENUM(BlueprintType)
enum class EPlacementStatus : uint8 {
    Valid,
    UnknownError,
    Obstructed,
    InvalidFoundation,
    InvalidSurface,
    TooCloseToTownHall,
    TooCloseToCamp,
    TooCloseToTownMarker,
    TooFarFromTownHallOrCamp,
    TooFarFromTownHall,
    TooFarFromCamp,
    RequiredHigherTierTH,
    TooLong,
    TooShort,
    TooHigh,
    TooLow,
    NotEnoughGold,
    TooCloseToEnemy,
    TooCloseToOtherWell,
    TooFarFromPlayer,
    NotAtCorrectBuildLocationType,
    RequiresDeployable,
    RequiresMarketplace,
    TooCloseTogether,
    RequiresMoreTownXp,
    TooCloseToWildSpawn,
    TooCloseToWater,
    VehicleMustBeEmpty,
    RequiresFoundationCeiling,
    RequiresValidSupport,
    RequiresFoundation,
    RequiresLandscape,
    NotAtFullHealth,
};

