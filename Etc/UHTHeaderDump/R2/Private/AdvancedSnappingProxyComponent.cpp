#include "AdvancedSnappingProxyComponent.h"

UAdvancedSnappingProxyComponent::UAdvancedSnappingProxyComponent() {
    this->bBlockSnapping = false;
    this->bDisableMinSnapWhenNotSnapping = false;
    this->bNoOverlap = false;
    this->bOverrideAngleOverlapMin = false;
    this->OverridedAngleOverlapMin = 30.00f;
    this->NumSnappingRequired = 0;
    this->MaxOverlapDistOverride = 0.00f;
}


