#include "HUDHintWidget.h"

UHUDHintWidget::UHUDHintWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PrimaryHintTextBlock = NULL;
    this->PrimaryHintCanvas = NULL;
    this->SecondaryHintTextBlock = NULL;
    this->SecondaryHintCanvas = NULL;
    this->HintVerticalBox = NULL;
    this->HintMaximizeButton = NULL;
    this->HintMinimizeButton = NULL;
}

void UHUDHintWidget::OnHintMinimizeClicked() {
}

void UHUDHintWidget::OnHintMaximizeClicked() {
}


