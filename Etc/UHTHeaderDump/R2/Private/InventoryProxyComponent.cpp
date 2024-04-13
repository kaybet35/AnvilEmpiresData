#include "InventoryProxyComponent.h"

UInventoryProxyComponent::UInventoryProxyComponent() {
    this->bUnpackCrates = false;
    this->bForceStackable = false;
    this->bEnforceWithdrawalStamina = false;
    this->bOnlyAllowMaxDurabilityItems = false;
    this->NormalizedSpoilageFactor = 0.00f;
    this->LifespanWhenEmpty = 0.00f;
    this->bAllowWithdrawal = true;
    this->bConvertItemsToPublic = false;
}


