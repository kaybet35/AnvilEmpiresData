#include "AutomationTestSettings.h"

UAutomationTestSettings::UAutomationTestSettings() {
    this->EditorTestModules.AddDefaulted(4);
    this->bUseAllProjectMapsToPlayInPIE = false;
    this->TestLevelFolders.AddDefaulted(1);
    this->PIETestDuration = 5.00f;
    this->DefaultInteractiveFramerate = 10.00f;
    this->DefaultInteractiveFramerateWaitTime = 600.00f;
    this->DefaultInteractiveFramerateDuration = 5.00f;
}


