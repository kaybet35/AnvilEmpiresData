#include "ProducableItem.h"

FProducableItem::FProducableItem() {
    this->ProducedItem = NULL;
    this->ProducedItemVisVar = 0;
    this->ProductionTime = 0.00f;
    this->OutputCount = 0;
    this->bRequiresResearch = false;
    this->bMakePublic = false;
    this->RequiredStructure = NULL;
}

