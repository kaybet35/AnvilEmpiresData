#include "VisItem.h"

UVisItem::UVisItem() {
    this->CodeName = 0;
    this->Icon = NULL;
    this->Mesh = NULL;
    this->StockpileMesh = NULL;
    this->bAutoSetStockpileExtents = false;
    this->bStockpileDefaultRotate = false;
    this->StockpileOrder = 0;
    this->GripType = EEquippedItemGripType::NoWeapon;
    this->AnimClass = NULL;
    this->UnarmedMeshLocation = EUnarmedItemMeshLocation::None;
    this->UnarmedMeshScale = 1.00f;
    this->AnimationIndex = -1;
}


