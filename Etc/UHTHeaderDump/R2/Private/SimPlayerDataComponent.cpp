#include "SimPlayerDataComponent.h"

USimPlayerDataComponent::USimPlayerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuardStrength = 0;
    this->TeamID = 0;
    this->Encumbrance = 0;
    this->GuardMeter = 0.00f;
    this->ActivityState = EAnvilSimActivityState::None;
    this->CurrentStance = EAnvilCharacterStance::Standing;
    this->PrimaryHeldItemCodeName = 0;
    this->PrimaryHeldUnderlyingCodeName = 0;
    this->SecondaryHeldItemCodeName = 0;
    this->SecondaryHeldUnderlyingCodeName = 0;
    this->UnarmedPrimaryHeldItemCodeName = 0;
    this->UnarmedSecondaryHeldItemCodeName = 0;
    this->CurrentMountedEntity = 0;
    this->PlayerUniqueID = 0;
    this->NobleVoteId = 0;
    this->TrappedTimer = 0.00f;
    this->StaggerTimer = 0.00f;
    this->bIsAiming = false;
    this->bIsGuarding = false;
    this->bShowStructureStats = false;
    this->bIsAdmin = false;
    this->bDebugDraw = false;
    this->bPriming = false;
    this->SecondsUntilFullDecay = 0.00f;
    this->HeldItemLightSourceRadius = 0.00f;
    this->FoodTypesOnCooldownBits = 0;
    this->AimYaw = 0.00f;
    this->AimPitch = 0.00f;
    this->LastIncomingAttackAngle = 0.00f;
    this->bIsMeshHidden = false;
}


