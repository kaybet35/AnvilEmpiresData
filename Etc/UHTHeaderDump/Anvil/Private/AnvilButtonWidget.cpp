#include "AnvilButtonWidget.h"

UAnvilButtonWidget::UAnvilButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LabelFontSize = 20;
    this->ButtonWidth = 200.00f;
    this->ButtonHeight = 50.00f;
    this->ButtonText = NULL;
    this->Button = NULL;
    this->SizeBox = NULL;
}

void UAnvilButtonWidget::ContextfulOnClicked() {
}


