#include "TownStatusWidget.h"

UTownStatusWidget::UTownStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PopulationStatus = NULL;
    this->MilitiaPopulationStatus = NULL;
    this->HappinessStatus = NULL;
    this->FoodStatus = NULL;
    this->TaxStatus = NULL;
    this->SilverStatus = NULL;
}

void UTownStatusWidget::UpdateStatus() {
}


