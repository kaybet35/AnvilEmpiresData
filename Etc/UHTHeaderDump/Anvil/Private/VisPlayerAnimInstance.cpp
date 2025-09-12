#include "VisPlayerAnimInstance.h"

UVisPlayerAnimInstance::UVisPlayerAnimInstance() {
    this->bNativeIsAttacking = false;
    this->NativeDir = 0.00f;
    this->NativeSpeed = 0.00f;
    this->NativeSpeedAbs = 0.00f;
    this->GripType = EEquippedItemGripType::NoWeapon;
    this->PrimaryGripType = EEquippedItemGripType::NoWeapon;
    this->SecondaryGripType = EEquippedItemGripType::NoWeapon;
    this->NativeStance = EAnvilCharacterStance::Standing;
    this->IncomingAttackDirection = EIncomingAttackDirection::None;
    this->bNativeStanceOnHorse = false;
    this->NativePoseIndex = 0;
    this->NativeIsAiming = false;
    this->NativeIsCrouching = false;
    this->bNativeIsGuarding = false;
    this->bNativeIsSecondaryEquipped = false;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->bPriming = false;
    this->bSecondaryMode = false;
    this->bSecondaryShieldMode = false;
    this->bCombatMode = false;
    this->bWantsToPush = false;
    this->bIsPushing = false;
    this->IsPushingBlendWeight = 0.00f;
    this->bIsSwimming = false;
    this->bNativeIsFalling = false;
    this->NativeAccuracy = 0.00f;
    this->NativeLadderClimbSpeed = 0.00f;
    this->bNativeVehicleInputStatePush = false;
    this->bNativeVehicleInputStatePull = false;
    this->bNativeVehicleInputStateCharge = false;
    this->bNativeVehicleInputStateStrafeLeft = false;
    this->bNativeVehicleInputStateStrafeRight = false;
    this->bNativeVehicleIsSailOpen = false;
    this->bNativePrimaryGripTypeIsPike = false;
    this->bNativeCombatModeIsStanding = false;
    this->bNativeSecondaryGripIsShieldScondaryShieldOff = false;
    this->bNativeIncomingAttack = false;
    this->bNativeIncomingAttackDirectionFront = false;
    this->bNativeIncomingAttackDirectionBack = false;
    this->bNativeIncomingAttackDirectionLeft = false;
    this->bNativeIncomingAttackDirectionRight = false;
    this->bNativeAbsSpeedOver25 = false;
    this->bNativeAimingStanceNotScorpionNotSpotter = false;
    this->bNativeAimingNotGuarding = false;
    this->NativeRangedClampedBowAccuracy = 0.00f;
    this->NativeUpperBodySpeedReference = 0.00f;
    this->bNativeUpperBodySpeedReferenceOver25 = false;
    this->bNativeUpperBodySpeedReferenceOver250 = false;
    this->bNativeNotAimingUpperBodySpeedBelow25 = false;
    this->bNativeNotAimingUpperBodySpeedAbove25 = false;
    this->bNativeIsAimingUpperBodySpeedBelow25 = false;
    this->bNativeIsAimingUpperBodySpeedAbove25 = false;
    this->NativeLegBlendspacePlayrate = 0.00f;
    this->bNativeSpeedOver10 = false;
    this->bNativeSpeedOver25 = false;
    this->bNativeSpeedOver95 = false;
    this->bNativeSpeedOver150 = false;
    this->bNativeSpeedOver250 = false;
    this->bNativeSpeedOver350 = false;
    this->bNativeSpeedOver600 = false;
}


