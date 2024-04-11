#include "AdvancedSnappingProxyComponent.h"

UAdvancedSnappingProxyComponent::UAdvancedSnappingProxyComponent() {
    this->bBlockSnapping = false;
    this->bNoOverlap = false;
    this->bSnappingRequired = false;
    this->bOverrideAngleOverlapMin = false;
    this->OverridedAngleOverlapMin = 30.00f;
}


