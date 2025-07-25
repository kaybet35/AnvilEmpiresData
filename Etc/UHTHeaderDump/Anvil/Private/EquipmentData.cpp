#include "EquipmentData.h"

FEquipmentData::FEquipmentData() {
    this->DurabilityLossPerUse = 0.00f;
    this->DamageRadius = 0.00f;
    this->AltDamageRadius = 0.00f;
    this->MinRangedDistance = 0.00f;
    this->VariableDamageMaxModifier = 0.00f;
    this->VariableDamageMinModifier = 0.00f;
    this->ShieldDurabilityLossMultiplier = 0.00f;
    this->GuardMeterCostPerHit = 0.00f;
    this->ArmorMitigation = 0;
    this->ArmourDamageMultiplier = 0.00f;
    this->SecondaryArmourDamageMultiplier = 0.00f;
    this->StabilityDamage = 0.00f;
    this->SecondaryStabilityDamage = 0.00f;
    this->StabilityMitigationPercent = 0;
    this->ToolEffectiveness = 0.00f;
    this->AimMovementSpeedModifier = 0.00f;
    this->AimRotationSpeedModifier = 0.00f;
    this->PrimaryMovementSpeedModifier = 0.00f;
    this->SecondaryMovementSpeedModifier = 0.00f;
    this->PrimaryChanceToPenetrateGuard = 0.00f;
    this->SecondaryChanceToPenetrateGuard = 0.00f;
}

