#include "RelicTechProgressWidget.h"

URelicTechProgressWidget::URelicTechProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemImage = NULL;
    this->TechProgressBar = NULL;
}

bool URelicTechProgressWidget::IsImageEnabled() {
    return false;
}

float URelicTechProgressWidget::GetNormalizedProgress() {
    return 0.0f;
}


