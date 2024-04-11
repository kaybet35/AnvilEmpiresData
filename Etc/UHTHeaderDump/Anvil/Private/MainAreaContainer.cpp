#include "MainAreaContainer.h"

UMainAreaContainer::UMainAreaContainer() : UUserWidget(FObjectInitializer::Get()) {
    this->MainAreaSizeBox = NULL;
    this->MainAreaVerticalBox = NULL;
    this->MainAreaSlot0 = NULL;
    this->MainAreaSlot1 = NULL;
    this->MainAreaSlot2 = NULL;
    this->WidthOverride = 0.00f;
    this->HeightOverride = 0.00f;
    this->MinDesiredWidth = 0.00f;
    this->MinDesiredHeight = 0.00f;
    this->MaxDesiredWidth = 0.00f;
    this->MaxDesiredHeight = 0.00f;
    this->bOverride_WidthOverride = false;
    this->bOverride_HeightOverride = false;
    this->bOverride_MinDesiredWidth = false;
    this->bOverride_MinDesiredHeight = false;
    this->bOverride_MaxDesiredWidth = false;
    this->bOverride_MaxDesiredHeight = false;
}


