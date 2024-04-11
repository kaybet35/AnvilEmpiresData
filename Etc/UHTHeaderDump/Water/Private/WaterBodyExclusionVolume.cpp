#include "WaterBodyExclusionVolume.h"

AWaterBodyExclusionVolume::AWaterBodyExclusionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExcludeAllOverlappingWaterBodies = true;
}


