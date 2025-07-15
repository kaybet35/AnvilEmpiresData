#include "AdvancedSnappingProxyComponent.h"

UAdvancedSnappingProxyComponent::UAdvancedSnappingProxyComponent() {
    this->bBlockSnapping = false;
    this->bDisableMinSnapWhenNotSnapping = false;
    this->bNoOverlap = false;
    this->bNoFoundationCheckWhenSnapped = false;
    this->OverridedAngleOverlapPriority = 10;
    this->OverridedAngleOverlapMin = 0.00f;
    this->NumSnappingRequired = 0;
    this->MaxOverlapDistOverride = 0.00f;
}


