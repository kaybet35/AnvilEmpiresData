#include "Footprint.h"

AFootprint::AFootprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoSet = false;
    this->bShowMesh = false;
    this->FootprintVisualizer = NULL;
}


