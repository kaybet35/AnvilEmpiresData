#include "ServerPartitionComponent.h"

UServerPartitionComponent::UServerPartitionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisualizeCookedRegion = false;
    this->ServerRegionCountX = 1;
    this->ServerRegionCountY = 1;
    this->TransitionRegionSize = 5000.00f;
}


