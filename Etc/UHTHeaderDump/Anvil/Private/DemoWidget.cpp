#include "DemoWidget.h"

UDemoWidget::UDemoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NextTestText = NULL;
    this->CountdownHeaderText = NULL;
    this->CountdownText = NULL;
    this->ConfirmButton = NULL;
    this->DiscordButton = NULL;
}

void UDemoWidget::UpdateText() {
}

void UDemoWidget::OnDiscordButtonClicked() {
}

void UDemoWidget::OnConfirmButtonClicked() {
}


