#include "HUDWidget.h"

UHUDWidget::UHUDWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InteractionIcon = NULL;
    this->HUDSubCanvas = NULL;
    this->NameCanvas = NULL;
    this->SignPostMessageCanvas = NULL;
    this->StatsCanvas = NULL;
    this->DismantleButtonsCanvas = NULL;
    this->TravelIndicatorCanvas = NULL;
    this->HUDNameWidgetClass = NULL;
    this->HUDSignPostWidgetClass = NULL;
    this->HUDStatsWidgetClass = NULL;
    this->DismantleButtonWidgetClass = NULL;
    this->OpenedHUDWindow = NULL;
    this->Compass = NULL;
    this->CompassPlayerArrow = NULL;
    this->PrimaryHeldItem = NULL;
    this->SecondaryHeldItem = NULL;
    this->PrimaryEquipmentItem = NULL;
    this->SecondaryEquipmentItem = NULL;
    this->GuardBar = NULL;
    this->GuardBarMaxSlider = NULL;
    this->GuardStatusWidget = NULL;
    this->GuardStrengthLeftIcon = NULL;
    this->GuardStrengthCenterIcon = NULL;
    this->GuardStrengthRightIcon = NULL;
    this->PlayerStatusText = NULL;
    this->WinConditionCanvas = NULL;
    this->WinConditionBackground = NULL;
    this->WinConditionLogo = NULL;
    this->VictoryTypeLogo = NULL;
    this->PlayerVitality = NULL;
    this->HorseVitality = NULL;
    this->InventoryHUD = NULL;
    this->DisclaimerCanvas = NULL;
    this->DisclaimerText = NULL;
    this->BuildSiteCanvas = NULL;
    this->PlacementStatusWidget = NULL;
    this->BuildSiteWidget = NULL;
    this->VictoryBackground = NULL;
    this->AgeEndingBackground = NULL;
    this->PostAgeEndingBackground = NULL;
    this->AranicLogo = NULL;
    this->MirrishLogo = NULL;
    this->NovanLogo = NULL;
    this->MilitaryVictoryLogo = NULL;
    this->CultureVictoryLogo = NULL;
    this->VictorySoundCue = NULL;
    this->AgeEndingSoundCue = NULL;
    this->InteractionProgressBar1 = NULL;
    this->InteractionProgressBar2 = NULL;
    this->WeatherStatsText = NULL;
    this->BorderRegionIndicatorText = NULL;
    this->ReinforcementStatus = NULL;
    this->BackoutImage = NULL;
    this->HUDHintWidget = NULL;
}



ESlateVisibility UHUDWidget::GetWeatherStatsTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UHUDWidget::GetWeatherStatsText() {
    return FText::GetEmpty();
}

ESlateVisibility UHUDWidget::GetNameCanvasVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UHUDWidget::GetHUDSubCanvasVisibility() {
    return ESlateVisibility::Visible;
}

ESlateVisibility UHUDWidget::GetHUDHintVisibility() {
    return ESlateVisibility::Visible;
}


