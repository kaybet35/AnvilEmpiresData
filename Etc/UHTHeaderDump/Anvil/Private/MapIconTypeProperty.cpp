#include "MapIconTypeProperty.h"

FMapIconTypeProperty::FMapIconTypeProperty() {
    this->bRotationFixed = false;
    this->bPositionFixed = false;
    this->bHasWorldEntityMapIcon = false;
    this->bHideInGameIcon = false;
    this->BaseSize = 0.00f;
    this->BaseSizeZoomFactor = 0.00f;
    this->FontSize = 0.00f;
    this->FontSizeZoomFactor = 0.00f;
    this->ZOrder = 0;
    this->MinDisplayScale = 0.00f;
    this->MaxDisplayScale = 0.00f;
    this->UpdateRange = 0.00f;
    this->IconClass = NULL;
}

