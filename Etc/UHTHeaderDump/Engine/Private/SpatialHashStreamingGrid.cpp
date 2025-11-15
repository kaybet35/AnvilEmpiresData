#include "SpatialHashStreamingGrid.h"

FSpatialHashStreamingGrid::FSpatialHashStreamingGrid() {
    this->CellSize = 0;
    this->LoadingRange = 0.00f;
    this->bBlockOnSlowStreaming = false;
    this->bClientOnlyVisible = false;
    this->HLODLayer = NULL;
}

