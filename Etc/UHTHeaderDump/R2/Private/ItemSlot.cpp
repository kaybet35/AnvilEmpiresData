#include "ItemSlot.h"

FItemSlot::FItemSlot() {
    this->ProxyRepeat = 0;
    this->bOr = false;
    this->HeldItem = NULL;
    this->bIsHeldItemPublic = false;
    this->Count = 0;
    this->StackLimit = 0;
    this->bAllowWithdrawal = false;
    this->bIsPlayerEquipmentSlot = false;
    this->DedicatedItemType = NULL;
    this->DedicatedUnderlyingItemType = NULL;
    this->bCheckDedicatedUnderlyingItem = false;
    this->RequiredEnablingItem = NULL;
    this->BackgroundType = EAnvilItemSlotBackgroundType::None;
}

