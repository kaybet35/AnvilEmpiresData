#include "ProducableItem.h"

FProducableItem::FProducableItem() {
    this->ProducedItem = NULL;
    this->ProductionTime = 0.00f;
    this->OutputCount = 0;
    this->OutputMax = 0;
    this->bRequiresResearch = false;
    this->bCrateProducedItems = false;
}

