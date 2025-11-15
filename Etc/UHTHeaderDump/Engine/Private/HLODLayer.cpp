#include "HLODLayer.h"

UHLODLayer::UHLODLayer() {
    this->LayerType = EHLODLayerType::Instancing;
    this->HLODBuilderClass = NULL;
    this->HLODBuilderSettings = NULL;
    this->bIsSpatiallyLoaded = true;
    this->CellSize = 25600;
    this->LoadingRange = 51200.00f;
}


