#include "InventorySlotData.h"

FInventorySlotData::FInventorySlotData() {
    this->bHidden = false;
    this->bIsDisabled = false;
    this->bCantArmDueToHeavyItem = false;
    this->PriorityGroup = 0;
}

