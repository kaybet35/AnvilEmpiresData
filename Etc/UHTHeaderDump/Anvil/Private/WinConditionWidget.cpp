#include "WinConditionWidget.h"

UWinConditionWidget::UWinConditionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HeaderContainer = NULL;
    this->Faction0MilitaryProgressBar = NULL;
    this->Faction1MilitaryProgressBar = NULL;
    this->Faction2MilitaryProgressBar = NULL;
    this->Faction0MilitaryTextBox = NULL;
    this->Faction1MilitaryTextBox = NULL;
    this->Faction2MilitaryTextBox = NULL;
    this->Faction0CultureProgressBar = NULL;
    this->Faction1CultureProgressBar = NULL;
    this->Faction2CultureProgressBar = NULL;
    this->Faction0CultureTextBox = NULL;
    this->Faction1CultureTextBox = NULL;
    this->Faction2CultureTextBox = NULL;
    this->Faction0CultureTimerProgressBar = NULL;
    this->Faction1CultureTimerProgressBar = NULL;
    this->Faction2CultureTimerProgressBar = NULL;
    this->Faction0ReligiousProgressBar = NULL;
    this->Faction1ReligiousProgressBar = NULL;
    this->Faction2ReligiousProgressBar = NULL;
    this->Faction0ReligiousTextBox = NULL;
    this->Faction1ReligiousTextBox = NULL;
    this->Faction2ReligiousTextBox = NULL;
    this->Faction0ReligiousInfluenceProgressBar = NULL;
    this->Faction1ReligiousInfluenceProgressBar = NULL;
    this->Faction2ReligiousInfluenceProgressBar = NULL;
    this->Faction0ReligiousVerticalBox = NULL;
    this->Faction1ReligiousVerticalBox = NULL;
    this->Faction2ReligiousVerticalBox = NULL;
    this->CachedWinConditionTooltip = NULL;
}

FText UWinConditionWidget::GetFaction2ReligiousTooltipText() {
    return FText::GetEmpty();
}

FText UWinConditionWidget::GetFaction2ReligiousText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction2ReligiousProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction2ReligiousProgress() {
    return 0.0f;
}

float UWinConditionWidget::GetFaction2ReligiousInfluenceProgress() {
    return 0.0f;
}

FText UWinConditionWidget::GetFaction2MilitaryText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction2MilitaryProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction2MilitaryProgress() {
    return 0.0f;
}

float UWinConditionWidget::GetFaction2CultureTimerProgress() {
    return 0.0f;
}

FText UWinConditionWidget::GetFaction2CultureText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction2CultureProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction2CultureProgress() {
    return 0.0f;
}

FText UWinConditionWidget::GetFaction1ReligiousTooltipText() {
    return FText::GetEmpty();
}

FText UWinConditionWidget::GetFaction1ReligiousText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction1ReligiousProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction1ReligiousProgress() {
    return 0.0f;
}

float UWinConditionWidget::GetFaction1ReligiousInfluenceProgress() {
    return 0.0f;
}

FText UWinConditionWidget::GetFaction1MilitaryText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction1MilitaryProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction1MilitaryProgress() {
    return 0.0f;
}

float UWinConditionWidget::GetFaction1CultureTimerProgress() {
    return 0.0f;
}

FText UWinConditionWidget::GetFaction1CultureText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction1CultureProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction1CultureProgress() {
    return 0.0f;
}

FText UWinConditionWidget::GetFaction0ReligiousTooltipText() {
    return FText::GetEmpty();
}

FText UWinConditionWidget::GetFaction0ReligiousText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction0ReligiousProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction0ReligiousProgress() {
    return 0.0f;
}

float UWinConditionWidget::GetFaction0ReligiousInfluenceProgress() {
    return 0.0f;
}

FText UWinConditionWidget::GetFaction0MilitaryText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction0MilitaryProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction0MilitaryProgress() {
    return 0.0f;
}

float UWinConditionWidget::GetFaction0CultureTimerProgress() {
    return 0.0f;
}

FText UWinConditionWidget::GetFaction0CultureText() {
    return FText::GetEmpty();
}

FLinearColor UWinConditionWidget::GetFaction0CultureProgressBarColour() {
    return FLinearColor{};
}

float UWinConditionWidget::GetFaction0CultureProgress() {
    return 0.0f;
}


