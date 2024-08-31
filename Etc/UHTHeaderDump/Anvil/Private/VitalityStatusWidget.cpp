#include "VitalityStatusWidget.h"

UVitalityStatusWidget::UVitalityStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HungerBar = NULL;
    this->HealthOverlay = NULL;
    this->HealthBar = NULL;
    this->StaminaOverlay = NULL;
    this->StaminaBar = NULL;
    this->StabilityBar = NULL;
}


