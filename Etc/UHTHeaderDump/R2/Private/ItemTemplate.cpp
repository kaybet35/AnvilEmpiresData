#include "ItemTemplate.h"

UItemTemplate::UItemTemplate() {
    this->CodeName = 0;
    this->ItemType = EAnvilItemType::Normal;
    this->SecondaryType = EAnvilItemType::None;
    this->ItemDurabilityType = EAnvilItemDurabilityType::None;
    this->ItemPayloadType = EAnvilItemPayloadType::None;
    this->PickupEntity = NULL;
    this->ItemDestroyedEffect = NULL;
    this->ItemInvokedEffect = NULL;
    this->ItemHitEffect = NULL;
    this->bStackable = false;
    this->bLarge = false;
    this->bTwoHanded = false;
    this->Encumberance = 0;
    this->ArmedDurabilityLossPerSec = 0.00f;
    this->DurabilityLossPerUse = 0.00f;
    this->DurabilityLossPerSec = 0.00f;
    this->bRearmAfterConsumption = false;
    this->StockPileWithdrawalValue = 1.00f;
    this->HeatedItem = NULL;
    this->CooledItem = NULL;
    this->bRanged = false;
    this->Damage = 0;
    this->DamageRadius = 0.00f;
    this->AmmoType = NULL;
    this->ProjectileEntity = NULL;
    this->VariableDamageMaxModifier = 1.25f;
    this->VariableDamageMinModifier = 0.75f;
    this->GuardMeterReductionMultiplier = 1.00f;
    this->bStaggersWielder = false;
    this->ArmourType = EAnvilArmourType::None;
    this->DamageType = EAnvilDamageType::Default;
    this->ArmorMitigation = 0;
    this->MitigationSuccessDurabilityLoss = 0;
    this->MitigationFailureDurabilityLoss = 0;
    this->ArmourMitigatedEffect = NULL;
    this->ToolType = EAnvilToolType::None;
    this->ToolEffectiveness = 1.00f;
    this->RegenPerSec = 0.00f;
    this->RegenDuration = 0.00f;
    this->ConversionRatioToFood = 0;
    this->FoodType = EAnvilFoodType::None;
    this->bDoesSpoil = false;
    this->SpoilageDurabilityLossPerSec = 0.00f;
    this->RequiredStance = EAnvilCharacterStance::Standing;
    this->AimMovementSpeedModifier = 0.00f;
    this->AimRotationSpeedModifier = 1.00f;
    this->bIsDeployable = false;
    this->DeployedBuildSite = NULL;
    this->GuardMeterCostPerHit = 0.00f;
    this->NightShroudLightRadius = 0.00f;
    this->bAllowCameraPan = true;
    this->MaxEncumbranceforAction = 1.00f;
    this->ShieldDurabilityLossMultiplier = 1.00f;
    this->HungerRestored = 0.00f;
    this->HealthLimitRestored = 0.00f;
    this->StaminaLimitRestored = 0.00f;
    this->QuantityPerCrate = 10;
    this->TownCurrencyValue = 0;
    this->StunChance = 0.00f;
    this->StunDuration = 0.00f;
    this->StunThrowDistance = 0.00f;
}


