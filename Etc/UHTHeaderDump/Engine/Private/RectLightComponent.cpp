#include "RectLightComponent.h"

URectLightComponent::URectLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SourceWidth = 64.00f;
    this->SourceHeight = 64.00f;
    this->BarnDoorAngle = 88.00f;
    this->BarnDoorLength = 20.00f;
    this->SourceTexture = NULL;
}

void URectLightComponent::SetSourceWidth(float NewValue) {
}

void URectLightComponent::SetSourceTexture(UTexture* NewValue) {
}

void URectLightComponent::SetSourceHeight(float NewValue) {
}

void URectLightComponent::SetBarnDoorLength(float NewValue) {
}

void URectLightComponent::SetBarnDoorAngle(float NewValue) {
}


