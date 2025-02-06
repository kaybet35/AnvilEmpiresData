#include "SimPlayerDataComponent.h"

USimPlayerDataComponent::USimPlayerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuardStrength = 0;
    this->TeamId = 0;
    this->CurrentMovementMode = EAnvilMovementMode::Walking;
    this->GuardMeter = 0.00f;
    this->Stability = 0.00f;
    this->StabilityTarget = 0.00f;
    this->StabilityGuardThreshold = 0.00f;
    this->bIsStabilityCooldownActive = 0;
    this->CurrentActivitySpeedModifier = 0.00f;
    this->CurrentActivityChainIndex = 0;
    this->ActivityState = EAnvilSimActivityState::None;
    this->CurrentStance = EAnvilCharacterStance::Standing;
    this->PrimaryHeldItemCodeName = 0;
    this->PrimaryHeldUnderlyingCodeName = 0;
    this->SecondaryHeldItemCodeName = 0;
    this->SecondaryHeldUnderlyingCodeName = 0;
    this->UnarmedPrimaryHeldItemCodeName = 0;
    this->UnarmedSecondaryHeldItemCodeName = 0;
    this->PlayerUniqueID = 0;
    this->NobleVoteId = 0;
    this->TrappedTimer = 0.00f;
    this->StaggerTimer = 0.00f;
    this->bStaggered = false;
    this->bIsAiming = false;
    this->bIsGuarding = false;
    this->bIsAdmin = false;
    this->bPriming = false;
    this->bInTravelZone = false;
    this->bAltAttackMode = false;
    this->bAltShieldMode = false;
    this->bIsPushing = false;
    this->bIsMeshHidden = false;
    this->bMouseSelectCeiling = false;
    this->bIsReinforcing = false;
    this->bIsFalling = false;
    this->bBasedMovement = false;
    this->SecondsUntilFullDecay = 0.00f;
    this->HeldItemLightSourceRadius = 0.00f;
    this->FoodTypesOnCooldownBits = 0;
    this->AimYaw = 0.00f;
    this->AimPitch = 0.00f;
    this->LastIncomingAttackAngle = 0.00f;
}


