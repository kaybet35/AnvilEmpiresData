#pragma once
#include "CoreMinimal.h"
#include "EAnvilSimActivityState.generated.h"

UENUM(BlueprintType)
enum class EAnvilSimActivityState : uint8 {
    None,
    Idle,
    Attacking,
    BayonetAttack,
    LaunchingProjectile,
    Equipping,
    Carrying,
    Vaulting,
    ClimbingLow,
    ClimbingMedium,
    ClimbingHigh,
    Reloading,
    FiringCannon,
    UsingHandTool,
    BuildingWithHandTool,
    Winding,
    Plundering,
    HorseRiding,
    Eating,
    Feeding,
    Farming,
    AttachRope,
    FishingWaiting,
    FishingHooked,
    FishingSuccess,
    FishingFailed,
    StunnedOnGround,
    StunnedGettingUp,
    EnteringAltAttackMode,
    ExitingAltAttackMode,
    EnteringAltShieldMode,
    ExitingAltShieldMode,
    Drowning,
    ChainedAttackRecovery,
    Crafting,
    NumTypes,
};

