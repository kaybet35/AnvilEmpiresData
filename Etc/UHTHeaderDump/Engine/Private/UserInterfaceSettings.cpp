#include "UserInterfaceSettings.h"

UUserInterfaceSettings::UUserInterfaceSettings() {
    this->RenderFocusRule = ERenderFocusRule::NavigationOnly;
    this->ApplicationScale = 1.00f;
    this->UIScaleRule = EUIScalingRule::ShortestSide;
    this->bAllowHighDPIInGameMode = false;
    this->bLoadWidgetsOnDedicatedServer = true;
    this->CustomScalingRuleClassInstance = NULL;
    this->CustomScalingRule = NULL;
}


