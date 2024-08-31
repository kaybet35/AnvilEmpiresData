#include "MapData.h"

FMapData::FMapData() {
    this->MapId = EAnvilMapId::Invalid;
    this->bIsSecondaryWorld = false;
    this->Scale = 0.00f;
    this->MapImage = NULL;
}

