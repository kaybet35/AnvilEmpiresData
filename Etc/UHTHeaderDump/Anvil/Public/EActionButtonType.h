#pragma once
#include "CoreMinimal.h"
#include "EActionButtonType.generated.h"

UENUM(BlueprintType)
enum class EActionButtonType : uint8 {
    None,
    Upgrade,
    ClaimHouse,
    ClaimBed,
    GotoSleep,
    DeployAsMilitia,
    ReturnToPledgedTown,
    CallForReinforcements,
    DismantleByOfficial,
    RestrictedModeOn,
    RestrictedModeOff,
    DeployCamp,
    DeployLadder,
    WithdrawSilver,
    AttachVehicle,
    DetachVehicle,
    RepairItem,
    SetTownName,
    PushLadder,
    RetractLadder,
    ClaimFamilyArea,
    StartPowerMill,
    StopPowerMill,
    ClaimFamilyInventory,
    PledgeToTown,
    ReinforceStructure,
};

