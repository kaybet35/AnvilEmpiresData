#include "AdvancedSnappingProxyComponent.h"

UAdvancedSnappingProxyComponent::UAdvancedSnappingProxyComponent() {
    this->bBlockSnapping = false;
    this->bNoOverlap = false;
    this->bOverrideAngleOverlapMin = false;
    this->OverridedAngleOverlapMin = 30.00f;
    this->NumSnappingRequired = 0;
}


