#include "HitInfo.h"

FHitInfo::FHitInfo() {
    this->Mask = 0;
    this->Distance = 0.00f;
    this->Time = 0.00f;
    this->Surface = EAnvilPhysicalSurfaceType::Default;
    this->bInitialOverlap = false;
}

