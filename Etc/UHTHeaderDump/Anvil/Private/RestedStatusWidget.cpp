#include "RestedStatusWidget.h"

URestedStatusWidget::URestedStatusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IconImage = NULL;
}

ESlateVisibility URestedStatusWidget::GetIconVisibility() {
    return ESlateVisibility::Visible;
}


