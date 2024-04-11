#include "InventoryItem.h"

FInventoryItem::FInventoryItem() {
    this->Count = 0;
    this->SlotType = EAnvilItemType::None;
    this->Durability = 0.00f;
    this->bIsRelic = false;
    this->StackLimit = 0;
    this->bIsDisabled = false;
    this->bTooEncumberedToEquip = false;
}

