#include "ActionButtonWidget.h"

UActionButtonWidget::UActionButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActionButtonType = EAnvilEntityActionType::None;
    this->ButtonImageOverride = NULL;
    this->ActionButton = NULL;
    this->CallForReinforcementsCue = NULL;
}

void UActionButtonWidget::OnClicked() {
}

bool UActionButtonWidget::IsActionButtonEnabled() {
    return false;
}

ESlateVisibility UActionButtonWidget::GetActionButtonVisibility() {
    return ESlateVisibility::Visible;
}


