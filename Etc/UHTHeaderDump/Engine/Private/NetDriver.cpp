#include "NetDriver.h"

UNetDriver::UNetDriver() {
    this->MaxDownloadSize = 0;
    this->bClampListenServerTickRate = false;
    this->NetServerMaxTickRate = 0;
    this->MaxNetTickRate = 0;
    this->MaxInternetClientRate = 10000;
    this->MaxClientRate = 15000;
    this->ServerTravelPause = 0.00f;
    this->SpawnPrioritySeconds = 0.00f;
    this->RelevantTimeout = 0.00f;
    this->KeepAliveTime = 0.00f;
    this->InitialConnectTimeout = 0.00f;
    this->ConnectionTimeout = 0.00f;
    this->TimeoutMultiplierForUnoptimizedBuilds = 0.00f;
    this->ServerConnection = NULL;
    this->RecentlyDisconnectedTrackingTime = 0;
    this->World = NULL;
    this->WorldPackage = NULL;
    this->NetConnectionClass = NULL;
    this->ReplicationDriverClass = NULL;
    this->ReplicationBridgeClass = NULL;
    this->NetDriverName = TEXT("GameNetDriver");
    this->ChannelDefinitions.AddDefaulted(3);
    this->bNoTimeouts = false;
    this->bNeverApplyNetworkEmulationSettings = false;
    this->ReplicationDriver = NULL;
}


