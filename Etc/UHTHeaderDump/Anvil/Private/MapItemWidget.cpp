#include "MapItemWidget.h"

UMapItemWidget::UMapItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MapItemButton = NULL;
    this->MapItemImage = NULL;
    this->ParentMapWidget = NULL;
    this->ParentSlot = NULL;
}

void UMapItemWidget::OnMapItemClicked() {
}

ESlateVisibility UMapItemWidget::GetItemVisibility() {
    return ESlateVisibility::Visible;
}


