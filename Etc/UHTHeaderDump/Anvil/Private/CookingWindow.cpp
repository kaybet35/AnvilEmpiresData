#include "CookingWindow.h"

UCookingWindow::UCookingWindow() {
    this->RecipeInputItemGrid = NULL;
    this->RecipeOutputItemGrid = NULL;
    this->WaterInputItemGrid = NULL;
    this->CookingDurationText = NULL;
    this->CheatSheetCanvasPanel = NULL;
    this->CheatSheetTextBlock = NULL;
    this->StartCookingButton = NULL;
    this->StartCookingButtonImage = NULL;
}

void UCookingWindow::OnStartCookingButtonClicked() {
}

ESlateVisibility UCookingWindow::GetCookingDurationTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UCookingWindow::GetCookingDurationText() {
    return FText::GetEmpty();
}


