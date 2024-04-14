#include "NewMapWidget.h"

UNewMapWidget::UNewMapWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MapItemWidgetClass = NULL;
    this->ZoomSpeed = 1.00f;
    this->ZoomMin = 1.00f;
    this->ZoomMax = 1.00f;
    this->ZoomAnimationTime = 1.00f;
    this->MapImage = NULL;
    this->MapImageCanvas = NULL;
    this->MapImageCanvasSlot = NULL;
    this->MapItemCanvas = NULL;
    this->MapItemCanvasSlot = NULL;
}


