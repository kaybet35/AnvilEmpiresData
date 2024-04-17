#include "HUDHintWidget.h"

UHUDHintWidget::UHUDHintWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PrimaryHintTextBlock = NULL;
    this->PrimaryHintCanvas = NULL;
    this->SecondaryHintTextBlock = NULL;
    this->SecondaryHintCanvas = NULL;
}


