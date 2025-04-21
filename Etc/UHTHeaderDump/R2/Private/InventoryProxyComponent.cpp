#include "InventoryProxyComponent.h"

UInventoryProxyComponent::UInventoryProxyComponent() {
    this->bUnpackCrates = false;
    this->bEnforceWithdrawalStamina = false;
    this->bOnlyAllowMaxDurabilityItems = false;
    this->bIsCheatBox = 0;
    this->StackRule = EAnvilInventoryStackRule::Default;
    this->NormalizedSpoilageFactor = 1.00f;
    this->LifespanWhenEmpty = 0.00f;
    this->bAllowWithdrawal = true;
    this->bAllowSubmission = true;
    this->bIsPublicInventory = false;
}


