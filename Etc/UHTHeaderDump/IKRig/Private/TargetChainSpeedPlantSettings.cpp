#include "TargetChainSpeedPlantSettings.h"

FTargetChainSpeedPlantSettings::FTargetChainSpeedPlantSettings() {
    this->EnableSpeedPlanting = false;
    this->SpeedThreshold = 0.00f;
    this->UnplantStiffness = 0.00f;
    this->UnplantCriticalDamping = 0.00f;
}

