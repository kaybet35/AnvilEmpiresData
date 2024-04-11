#include "FoodCooldownWidget.h"

UFoodCooldownWidget::UFoodCooldownWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FoodTypeIconBrushList[0] = NULL;
    this->FoodTypeIconBrushList[1] = NULL;
    this->FoodTypeIconBrushList[2] = NULL;
    this->FoodTypeIconBrushList[3] = NULL;
    this->FoodTypeIconBrushList[4] = NULL;
    this->FoodTypeIconBrushList[5] = NULL;
    this->FoodTypeIconBrushList[6] = NULL;
    this->FoodTypeIconBrushList[7] = NULL;
    this->FoodCooldownIconWidgetClass = NULL;
    this->FoodIconsHorizontalBox = NULL;
}


