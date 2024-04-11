#include "ItemSlot.h"

FItemSlot::FItemSlot() {
    this->ProxyRepeat = 0;
    this->bOr = false;
    this->HeldItem = NULL;
    this->Count = 0;
    this->StackLimit = 0;
    this->bHoldsLarge = false;
    this->SlotType = EAnvilItemType::None;
    this->DedicatedItemType = NULL;
    this->DedicatedUnderlyingItemType = NULL;
}

