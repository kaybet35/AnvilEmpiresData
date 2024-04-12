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
    DismantleByOfficial,
    RestrictedModeOn,
    RestrictedModeOff,
    IncreaseRefineryPriority,
    DecreaseRefineryPriority,
    DeployCamp,
    DeployLadder,
    WithdrawSilver,
    AttachToHorse,
    DetachFromHorse,
    RepairItem,
    SetTownName,
    PushLadder,
    RetractLadder,
    FamilyPledgeRestrictedOn,
    FamilyPledgeRestrictedOff,
    ClaimFamilyArea,
};

