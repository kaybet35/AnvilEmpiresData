#include "OptionsMenuVideoWidget.h"

UOptionsMenuVideoWidget::UOptionsMenuVideoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FullscreenDropdown = NULL;
    this->ResolutionDropdown = NULL;
    this->QualityDropdown = NULL;
    this->VSyncDropdown = NULL;
}

void UOptionsMenuVideoWidget::OnFullscreenModeChanged(const FString& Input) {
}


