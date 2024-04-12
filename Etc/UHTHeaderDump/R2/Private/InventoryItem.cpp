#include "InventoryItem.h"

FInventoryItem::FInventoryItem() {
    this->Count = 0;
    this->SlotType = EAnvilItemType::None;
    this->Durability = 0.00f;
    this->ItemFlags = 0;
    this->Payload = 0;
    this->StackLimit = 0;
    this->bIsDisabled = false;
    this->bTooEncumberedToEquip = false;
}

