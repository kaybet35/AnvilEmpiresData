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
    AttachAnimal,
    DetachAnimal,
    RepairItem,
    SetTownName,
    PushLadder,
    RetractLadder,
    ClaimFamilyArea,
    StartPowerMill,
    StopPowerMill,
    ClaimFamilyInventory,
};

