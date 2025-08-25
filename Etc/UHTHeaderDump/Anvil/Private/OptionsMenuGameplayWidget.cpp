#include "OptionsMenuGameplayWidget.h"

UOptionsMenuGameplayWidget::UOptionsMenuGameplayWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ShowPlayerNameDropDown = NULL;
    this->InteractCameraZoomDropDown = NULL;
    this->HideCrowdNamesDropDown = NULL;
    this->AutoArmEquippedItemsDropDown = NULL;
}


