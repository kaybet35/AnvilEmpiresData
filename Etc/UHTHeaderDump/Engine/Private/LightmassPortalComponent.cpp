#include "LightmassPortalComponent.h"

ULightmassPortalComponent::ULightmassPortalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->PreviewBox = NULL;
}


