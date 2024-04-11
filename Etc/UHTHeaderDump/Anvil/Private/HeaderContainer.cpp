#include "HeaderContainer.h"

UHeaderContainer::UHeaderContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->HeaderTextFontSize = 24;
    this->bHeaderWidthOverride = true;
    this->HeaderWidth = 500.00f;
    this->HeaderHeight = 50.00f;
    this->UpperPadding = 10.00f;
    this->HeaderTextBox = NULL;
    this->HeaderSizeBox = NULL;
    this->HeaderSpacer = NULL;
    this->TooltipButton = NULL;
}


