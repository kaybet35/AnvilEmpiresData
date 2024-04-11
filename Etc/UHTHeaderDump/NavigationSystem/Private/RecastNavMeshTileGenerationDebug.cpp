#include "RecastNavMeshTileGenerationDebug.h"

FRecastNavMeshTileGenerationDebug::FRecastNavMeshTileGenerationDebug() {
    this->bEnabled = false;
    this->bHeightfieldSolidFromRasterization = false;
    this->bHeightfieldSolidPostInclusionBoundsFiltering = false;
    this->bHeightfieldSolidPostHeightFiltering = false;
    this->bCompactHeightfield = false;
    this->bCompactHeightfieldEroded = false;
    this->bCompactHeightfieldRegions = false;
    this->bCompactHeightfieldDistances = false;
    this->bTileCacheLayerAreas = false;
    this->bTileCacheLayerRegions = false;
    this->bTileCacheContours = false;
    this->bTileCachePolyMesh = false;
    this->bTileCacheDetailMesh = false;
}

