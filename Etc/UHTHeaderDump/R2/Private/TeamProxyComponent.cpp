#include "TeamProxyComponent.h"

UTeamProxyComponent::UTeamProxyComponent() {
    this->TeamId = 0;
    this->Accessibility = EAnvilAccessibilityType::FriendlyOnly;
    this->bAlwaysAllowAccessWhenScorched = true;
}


