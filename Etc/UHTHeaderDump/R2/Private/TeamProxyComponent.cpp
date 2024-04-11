#include "TeamProxyComponent.h"

UTeamProxyComponent::UTeamProxyComponent() {
    this->TeamID = 0;
    this->Accessibility = EAnvilAccessibilityType::FriendlyOnly;
    this->bAlwaysAllowAccessWhenScorched = true;
}


