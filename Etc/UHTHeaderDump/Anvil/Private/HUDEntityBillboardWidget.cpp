#include "HUDEntityBillboardWidget.h"

UHUDEntityBillboardWidget::UHUDEntityBillboardWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Target = NULL;
    this->WorldZOffset = 0.00f;
    this->Canvas = NULL;
    this->CanvasSlot = NULL;
}


