#include "ActionButtonWidget.h"

UActionButtonWidget::UActionButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActionButtonType = EActionButtonType::None;
    this->ActionButton = NULL;
    this->CallForReinforcementsCue = NULL;
}

void UActionButtonWidget::OnHovered() {
}

void UActionButtonWidget::OnClicked() {
}

bool UActionButtonWidget::IsActionButtonEnabled() {
    return false;
}

ESlateVisibility UActionButtonWidget::GetActionButtonVisibility() {
    return ESlateVisibility::Visible;
}


