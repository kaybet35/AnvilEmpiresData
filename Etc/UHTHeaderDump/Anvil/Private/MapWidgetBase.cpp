#include "MapWidgetBase.h"

UMapWidgetBase::UMapWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->MapSheet = NULL;
    this->ZoomSpeed = 0.00f;
    this->ZoomMin = 0.00f;
    this->ZoomMax = 0.00f;
    this->ZoomAnimationTime = 0.00f;
    this->MapImage = NULL;
    this->MapImageSheet = NULL;
    this->MapImageSheetSlot = NULL;
    this->TerritoryTexture = NULL;
}


