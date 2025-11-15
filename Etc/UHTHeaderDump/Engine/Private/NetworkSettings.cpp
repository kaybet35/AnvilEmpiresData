#include "NetworkSettings.h"

UNetworkSettings::UNetworkSettings() {
    this->bVerifyPeer = false;
    this->bEnableMultiplayerWorldOriginRebasing = false;
    this->NetworkEmulationProfiles.AddDefaulted(2);
}


