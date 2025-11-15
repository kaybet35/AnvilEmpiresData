#include "RuntimeVirtualTextureComponent.h"

URuntimeVirtualTextureComponent::URuntimeVirtualTextureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->bSetBoundsButton = false;
    this->bSnapBoundsToLandscape = false;
    this->VirtualTexture = NULL;
    this->bEnableScalability = false;
    this->ScalabilityGroup = 0;
    this->bHidePrimitives = false;
    this->StreamingTexture = NULL;
    this->StreamLowMips = 0;
    this->bBuildStreamingMipsButton = false;
    this->LossyCompressionAmount = TLCA_Default;
    this->bUseStreamingLowMipsInEditor = false;
    this->bBuildDebugStreamingMips = false;
}

void URuntimeVirtualTextureComponent::Invalidate(const FBoxSphereBounds& WorldBounds) {
}


