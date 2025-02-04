#include "CookingWindow.h"

UCookingWindow::UCookingWindow() {
    this->RecipeInputItemGrid = NULL;
    this->RecipeOutputItemGrid = NULL;
    this->FuelInputItemGrid = NULL;
    this->FuelOutputItemGrid = NULL;
    this->WaterInputItemGrid = NULL;
    this->CookingDurationText = NULL;
    this->FuelDurationText = NULL;
    this->CheatSheetCanvasPanel = NULL;
    this->CheatSheetTextBlock = NULL;
    this->StartCookingButton = NULL;
    this->StartCookingButtonImage = NULL;
}

void UCookingWindow::OnStartCookingButtonClicked() {
}

ESlateVisibility UCookingWindow::GetFuelDurationTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UCookingWindow::GetFuelDurationText() {
    return FText::GetEmpty();
}

ESlateVisibility UCookingWindow::GetCookingDurationTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UCookingWindow::GetCookingDurationText() {
    return FText::GetEmpty();
}


