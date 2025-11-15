#include "InputClampConstants.h"

FInputClampConstants::FInputClampConstants() {
    this->bClampResult = false;
    this->bInterpResult = false;
    this->ClampMin = 0.00f;
    this->ClampMax = 0.00f;
    this->InterpSpeedIncreasing = 0.00f;
    this->InterpSpeedDecreasing = 0.00f;
}

