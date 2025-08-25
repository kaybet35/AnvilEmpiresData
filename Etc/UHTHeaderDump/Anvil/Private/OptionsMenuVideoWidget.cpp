#include "OptionsMenuVideoWidget.h"

UOptionsMenuVideoWidget::UOptionsMenuVideoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FullscreenDropdown = NULL;
    this->ResolutionDropdown = NULL;
    this->QualityDropdown = NULL;
    this->ShadowQualityDropdown = NULL;
    this->VSyncDropdown = NULL;
    this->RendererDropdown = NULL;
    this->RestartRequiredBanner = NULL;
}

void UOptionsMenuVideoWidget::SetRenderer(const FString& Input) {
}

void UOptionsMenuVideoWidget::SetFullscreen(const FString& Input) {
}


