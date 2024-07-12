#include "MapData.h"

FMapData::FMapData() {
    this->MapId = EAnvilMapId::Invalid;
    this->bIsSecondaryWorld = false;
    this->MapImage = NULL;
    this->MapTerritoryMask = NULL;
    this->MapTreeLayerImage = NULL;
}

