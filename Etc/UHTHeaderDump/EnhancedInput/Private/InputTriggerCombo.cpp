#include "InputTriggerCombo.h"

UInputTriggerCombo::UInputTriggerCombo() {
    this->bShouldAlwaysTick = true;
    this->CurrentComboStepIndex = 0;
    this->CurrentTimeBetweenComboSteps = 0.00f;
}


