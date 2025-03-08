#include "BuildSitePlacementInfo.h"

FBuildSitePlacementInfo::FBuildSitePlacementInfo() {
    this->InRichSoil = false;
    this->BeaconTowerLink = false;
    this->BeaconTowerTownHallLink = false;
    this->InFamilyArea = false;
    this->ProximityToRoad = false;
    this->FamilyAreaExtent = 0.00f;
    this->BeaconTowerAltitudePercent = 0.00f;
    this->NumBeaconTowerNeighbours = 0;
    this->DistanceToTown = 0;
}

