#include "WorldPartitionMiniMap.h"

AWorldPartitionMiniMap::AWorldPartitionMiniMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MiniMapTexture = NULL;
    this->WorldUnitsPerPixel = 50;
    this->BuilderCellSize = 102400;
    this->CaptureSource = SCS_BaseColor;
    this->CaptureWarmupFrames = 5;
    this->MiniMapTileSize = 0;
}


