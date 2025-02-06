#include "HUDNameWidget.h"

UHUDNameWidget::UHUDNameWidget() {
    this->LocalChatDisplayTime = 3.00f;
    this->NameText = NULL;
    this->LocalChatText = NULL;
    this->ReinforcementIcon = NULL;
    this->LocalChatTextLimit = 45;
}

ESlateVisibility UHUDNameWidget::GetWidgetVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UHUDNameWidget::GetReinforcementIconVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UHUDNameWidget::GetPlayerNameVisibility() {
    return ESlateVisibility::Visible;
}

FText UHUDNameWidget::GetPlayerNameText() {
    return FText::GetEmpty();
}

FSlateColor UHUDNameWidget::GetPlayerNameColour() {
    return FSlateColor{};
}

ESlateVisibility UHUDNameWidget::GetLocalChatTextVisibility() {
    return ESlateVisibility::Visible;
}


