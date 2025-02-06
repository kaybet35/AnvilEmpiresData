#include "VisItem.h"

UVisItem::UVisItem() {
    this->CodeName = 0;
    this->Icon = NULL;
    this->Category = EVisItemCategory::None;
    this->Mesh = NULL;
    this->StockpileMesh = NULL;
    this->SingleItemStockpileMesh = NULL;
    this->bAutoSetStockpileExtents = false;
    this->bStockpileCanFlip = true;
    this->StockpileOrder = 0;
    this->GripType = EEquippedItemGripType::NoWeapon;
    this->AnimClass = NULL;
    this->UnarmedMeshLocation = EUnarmedItemMeshLocation::None;
    this->UnarmedMeshScale = 1.00f;
    this->AnimationIndex = -1;
    this->SecondaryLaunchingProjectileOverride = NULL;
}


