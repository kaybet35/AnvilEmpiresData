#include "InventorySlot.h"

FInventorySlot::FInventorySlot() {
    this->ProxyRepeat = 0;
    this->StackLimit = 0;
    this->bOr = false;
    this->bAllowWithdrawal = false;
    this->bIsPlayerEquipmentSlot = false;
    this->bCheckDedicatedUnderlyingItem = false;
    this->AcceptedTagsVisVar = 0;
    this->RequiredTagsVisVar = 0;
    this->ProhibitedTagsVisVar = 0;
    this->DedicatedItemType = NULL;
    this->DedicatedItemTypeVisVar = 0;
    this->DedicatedUnderlyingItem = NULL;
    this->DedicatedUnderlyingItemVisVar = 0;
    this->RequiredEnablingItem = NULL;
    this->RequiredEnablingItemVisVar = 0;
    this->BackgroundType = EAnvilItemSlotBackgroundType::None;
}

