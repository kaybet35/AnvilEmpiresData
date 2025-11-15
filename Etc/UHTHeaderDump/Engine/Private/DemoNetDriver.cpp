#include "DemoNetDriver.h"

UDemoNetDriver::UDemoNetDriver() {
    this->NetConnectionClassName = TEXT("/Script/Engine.DemoNetConnection");
    this->ChannelDefinitions.AddDefaulted(2);
    this->bNeverApplyNetworkEmulationSettings = true;
    this->CheckpointSaveMaxMSPerFrame = 0.00f;
}


