#include "HUDWidget.h"

UHUDWidget::UHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InteractionIcon = NULL;
    this->HUDCanvas = NULL;
    this->NameCanvas = NULL;
    this->StatsCanvas = NULL;
    this->TravelIndicatorCanvas = NULL;
    this->HUDNameWidgetClass = NULL;
    this->HUDStatsWidgetClass = NULL;
    this->OpenedHUDWindow = NULL;
    this->Compass = NULL;
    this->CompassPlayerArrow = NULL;
    this->PrimaryHeldItem = NULL;
    this->SecondaryHeldItem = NULL;
    this->GuardBar = NULL;
    this->GuardStatusWidget = NULL;
    this->GuardStrengthLeftIcon = NULL;
    this->GuardStrengthCenterIcon = NULL;
    this->GuardStrengthRightIcon = NULL;
    this->EncumbranceIcon = NULL;
    this->EncumbranceText = NULL;
    this->PlayerStatusText = NULL;
    this->GameplayHintText = NULL;
    this->GameplayHintCanvas = NULL;
    this->WinConditionCanvas = NULL;
    this->WinConditionText = NULL;
    this->WinConditionLogo = NULL;
    this->TownStatusAlertCanvas = NULL;
    this->TownStatusAlertText = NULL;
    this->PlayerVitality = NULL;
    this->HorseVitality = NULL;
    this->DisclaimerCanvas = NULL;
    this->DisclaimerText = NULL;
    this->AranicLogo = NULL;
    this->MirrishLogo = NULL;
    this->NovanLogo = NULL;
    this->LocalChatDisplayTime = 3.00f;
    this->InteractionProgressBar1 = NULL;
    this->InteractionProgressBar2 = NULL;
}



ESlateVisibility UHUDWidget::GetHUDWidgetVisibility() {
    return ESlateVisibility::Visible;
}


