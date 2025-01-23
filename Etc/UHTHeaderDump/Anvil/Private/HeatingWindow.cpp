#include "HeatingWindow.h"

UHeatingWindow::UHeatingWindow() {
    this->ItemsItemGrid = NULL;
    this->FuelInputItemGrid = NULL;
    this->FuelOutputItemGrid = NULL;
    this->FuelDurationText = NULL;
}

ESlateVisibility UHeatingWindow::GetFuelDurationTextVisibility() {
    return ESlateVisibility::Visible;
}

FText UHeatingWindow::GetFuelDurationText() {
    return FText::GetEmpty();
}


