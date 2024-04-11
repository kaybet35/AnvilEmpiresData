#include "GridItemWidget.h"

UGridItemWidget::UGridItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemWidth = 75.00f;
    this->ItemHeight = 75.00f;
    this->Button = NULL;
    this->SizeBox = NULL;
    this->ItemImage = NULL;
    this->SubItemImage = NULL;
    this->EmptyImage = NULL;
    this->bIsActive = true;
}

void UGridItemWidget::OnClicked() {
}


