#include "VisPlayerAnimInstance.h"

UVisPlayerAnimInstance::UVisPlayerAnimInstance() {
    this->bNativeIsAttacking = false;
    this->NativeDir = 0.00f;
    this->NativeSpeed = 0.00f;
    this->GripType = EEquippedItemGripType::NoWeapon;
    this->PrimaryGripType = EEquippedItemGripType::NoWeapon;
    this->SecondaryGripType = EEquippedItemGripType::NoWeapon;
    this->NativeStance = EAnvilCharacterStance::Standing;
    this->VehicleInputState = EAnvilVehicleInputState::Idle;
    this->IncomingAttackDirection = EIncomingAttackDirection::None;
    this->NativePoseIndex = 0;
    this->NativeIsAiming = false;
    this->NativeIsCrouching = false;
    this->bNativeIsGuarding = false;
    this->bNativeIsSecondaryEquipped = false;
    this->AimPitch = 0.00f;
    this->AimYaw = 0.00f;
    this->bPriming = false;
    this->bSecondaryMode = false;
}


