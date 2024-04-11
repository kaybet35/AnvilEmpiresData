#include "RigUnit_SphericalPoseReader.h"

FRigUnit_SphericalPoseReader::FRigUnit_SphericalPoseReader() {
    this->OutputParam = 0.00f;
    this->ActiveRegionSize = 0.00f;
    this->FalloffSize = 0.00f;
    this->FlipWidthScaling = false;
    this->FlipHeightScaling = false;
    this->bCachedInitTransforms = false;
}

