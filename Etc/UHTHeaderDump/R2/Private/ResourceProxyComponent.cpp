#include "ResourceProxyComponent.h"

UResourceProxyComponent::UResourceProxyComponent() {
    this->Type = EAnvilResourceType::Default;
    this->HitPoints = 0;
    this->bShouldDestroyOnCollect = true;
    this->RequiredTool = EAnvilToolType::None;
    this->RequiredTemperature = 0.00f;
    this->bInventoryTransferToPlayer = true;
    this->DroppedResourceAmount = 0;
    this->DroppedResourceEntity = NULL;
    this->bScatterSecondaryResource = false;
    this->DroppedSecondaryResourceAmount = 0;
    this->DroppedSecondaryResourceEntity = NULL;
    this->HuskEntity = NULL;
    this->bSnapHuskEntityToGround = true;
    this->SilverDropMultiplier = 0.00f;
    this->DestructionEffect = NULL;
}


