#include "InventoryContainerWidget.h"

UInventoryContainerWidget::UInventoryContainerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->UnderlyingInventoryWidget = NULL;
    this->PreviewItemCount = 6;
    this->WidthOverride = 0.00f;
    this->HeightOverride = 0.00f;
    this->bOverride_WidthOverride = false;
    this->bOverride_HeightOverride = false;
    this->InventoryContainerSizeBox = NULL;
}


