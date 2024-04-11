#include "TooltipWidget.h"

UTooltipWidget::UTooltipWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ResourceWidgetClass = NULL;
    this->HeaderText = NULL;
    this->BodyText = NULL;
    this->BodyExtraText = NULL;
    this->FooterText = NULL;
    this->ResourceBar = NULL;
    this->ResourcesContainer = NULL;
}


